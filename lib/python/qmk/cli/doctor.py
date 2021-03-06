"""QMK Doctor

Check out the user's QMK environment and make sure it's ready to compile.
"""
import platform

from milc import cli
from milc.questions import yesno
from qmk import submodules
from qmk.constants import QMK_FIRMWARE
<<<<<<< HEAD
<<<<<<< HEAD
from qmk.questions import yesno
=======
<<<<<<< HEAD
>>>>>>> dontTouch/master
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
>>>>>>> UpdateQMK
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
from qmk.commands import run
from qmk.os_helpers import CheckStatus, check_binaries, check_binary_versions, check_submodules, check_git_repo


<<<<<<< HEAD
<<<<<<< HEAD

def _udev_rule(vid, pid=None, *args):
    """ Helper function that return udev rules
    """
    rule = ""
    if pid:
        rule = 'SUBSYSTEMS=="usb", ATTRS{idVendor}=="%s", ATTRS{idProduct}=="%s", TAG+="uaccess", RUN{builtin}+="uaccess"' % (vid, pid)
    else:
        rule = 'SUBSYSTEMS=="usb", ATTRS{idVendor}=="%s", TAG+="uaccess", RUN{builtin}+="uaccess"' % vid
    if args:
        rule = ', '.join([rule, *args])
    return rule


def _deprecated_udev_rule(vid, pid=None):
    """ Helper function that return udev rules

    Note: these are no longer the recommended rules, this is just used to check for them
    """
    if pid:
        return 'SUBSYSTEMS=="usb", ATTRS{idVendor}=="%s", ATTRS{idProduct}=="%s", MODE:="0666"' % (vid, pid)
    else:
        return 'SUBSYSTEMS=="usb", ATTRS{idVendor}=="%s", MODE:="0666"' % vid


def parse_gcc_version(version):
    m = re.match(r"(\d+)(?:\.(\d+))?(?:\.(\d+))?", version)

    return {
        'major': int(m.group(1)),
        'minor': int(m.group(2)) if m.group(2) else 0,
        'patch': int(m.group(3)) if m.group(3) else 0,
    }


def check_arm_gcc_version():
    """Returns True if the arm-none-eabi-gcc version is not known to cause problems.
    """
    if 'output' in ESSENTIAL_BINARIES['arm-none-eabi-gcc']:
        version_number = ESSENTIAL_BINARIES['arm-none-eabi-gcc']['output'].strip()
        cli.log.info('Found arm-none-eabi-gcc version %s', version_number)

    return True  # Right now all known arm versions are ok


def check_avr_gcc_version():
    """Returns True if the avr-gcc version is not known to cause problems.
    """
    if 'output' in ESSENTIAL_BINARIES['avr-gcc']:
        version_number = ESSENTIAL_BINARIES['avr-gcc']['output'].strip()

        parsed_version = parse_gcc_version(version_number)
        if parsed_version['major'] > 8:
            cli.log.error('We do not recommend avr-gcc newer than 8. Downgrading to 8.x is recommended.')
            return False

        cli.log.info('Found avr-gcc version %s', version_number)
        return True

    return False


def check_avrdude_version():
    if 'output' in ESSENTIAL_BINARIES['avrdude']:
        last_line = ESSENTIAL_BINARIES['avrdude']['output'].split('\n')[-2]
        version_number = last_line.split()[2][:-1]
        cli.log.info('Found avrdude version %s', version_number)

    return True


def check_dfu_util_version():
    if 'output' in ESSENTIAL_BINARIES['dfu-util']:
        first_line = ESSENTIAL_BINARIES['dfu-util']['output'].split('\n')[0]
        version_number = first_line.split()[1]
        cli.log.info('Found dfu-util version %s', version_number)

    return True


def check_dfu_programmer_version():
    if 'output' in ESSENTIAL_BINARIES['dfu-programmer']:
        first_line = ESSENTIAL_BINARIES['dfu-programmer']['output'].split('\n')[0]
        version_number = first_line.split()[1]
        cli.log.info('Found dfu-programmer version %s', version_number)

    return True


def check_binaries():
    """Iterates through ESSENTIAL_BINARIES and tests them.
    """
    ok = True

    for binary in sorted(ESSENTIAL_BINARIES):
        if not is_executable(binary):
            ok = False

    return ok


def check_submodules():
    """Iterates through all submodules to make sure they're cloned and up to date.
    """
    ok = True

    for submodule in submodules.status().values():
        if submodule['status'] is None:
            cli.log.error('Submodule %s has not yet been cloned!', submodule['name'])
            ok = False
        elif not submodule['status']:
            cli.log.error('Submodule %s is not up to date!', submodule['name'])
            ok = False

    return ok


def check_udev_rules():
    """Make sure the udev rules look good.
    """
    ok = True
    udev_dir = Path("/etc/udev/rules.d/")
    desired_rules = {
        'atmel-dfu': {
            _udev_rule("03EB", "2FEF"),  # ATmega16U2
            _udev_rule("03EB", "2FF0"),  # ATmega32U2
            _udev_rule("03EB", "2FF3"),  # ATmega16U4
            _udev_rule("03EB", "2FF4"),  # ATmega32U4
            _udev_rule("03EB", "2FF9"),  # AT90USB64
            _udev_rule("03EB", "2FFB")  # AT90USB128
        },
        'kiibohd': {_udev_rule("1C11", "B007")},
        'stm32': {
            _udev_rule("1EAF", "0003"),  # STM32duino
            _udev_rule("0483", "DF11")  # STM32 DFU
        },
        'bootloadhid': {_udev_rule("16C0", "05DF")},
        'usbasploader': {_udev_rule("16C0", "05DC")},
        'massdrop': {_udev_rule("03EB", "6124", 'ENV{ID_MM_DEVICE_IGNORE}="1"')},
        'caterina': {
            # Spark Fun Electronics
            _udev_rule("1B4F", "9203", 'ENV{ID_MM_DEVICE_IGNORE}="1"'),  # Pro Micro 3V3/8MHz
            _udev_rule("1B4F", "9205", 'ENV{ID_MM_DEVICE_IGNORE}="1"'),  # Pro Micro 5V/16MHz
            _udev_rule("1B4F", "9207", 'ENV{ID_MM_DEVICE_IGNORE}="1"'),  # LilyPad 3V3/8MHz (and some Pro Micro clones)
            # Pololu Electronics
            _udev_rule("1FFB", "0101", 'ENV{ID_MM_DEVICE_IGNORE}="1"'),  # A-Star 32U4
            # Arduino SA
            _udev_rule("2341", "0036", 'ENV{ID_MM_DEVICE_IGNORE}="1"'),  # Leonardo
            _udev_rule("2341", "0037", 'ENV{ID_MM_DEVICE_IGNORE}="1"'),  # Micro
            # Adafruit Industries LLC
            _udev_rule("239A", "000C", 'ENV{ID_MM_DEVICE_IGNORE}="1"'),  # Feather 32U4
            _udev_rule("239A", "000D", 'ENV{ID_MM_DEVICE_IGNORE}="1"'),  # ItsyBitsy 32U4 3V3/8MHz
            _udev_rule("239A", "000E", 'ENV{ID_MM_DEVICE_IGNORE}="1"'),  # ItsyBitsy 32U4 5V/16MHz
            # dog hunter AG
            _udev_rule("2A03", "0036", 'ENV{ID_MM_DEVICE_IGNORE}="1"'),  # Leonardo
            _udev_rule("2A03", "0037", 'ENV{ID_MM_DEVICE_IGNORE}="1"')  # Micro
        }
    }

    # These rules are no longer recommended, only use them to check for their presence.
    deprecated_rules = {
        'atmel-dfu': {_deprecated_udev_rule("03eb", "2ff4"), _deprecated_udev_rule("03eb", "2ffb"), _deprecated_udev_rule("03eb", "2ff0")},
        'kiibohd': {_deprecated_udev_rule("1c11")},
        'stm32': {_deprecated_udev_rule("1eaf", "0003"), _deprecated_udev_rule("0483", "df11")},
        'bootloadhid': {_deprecated_udev_rule("16c0", "05df")},
        'caterina': {'ATTRS{idVendor}=="2a03", ENV{ID_MM_DEVICE_IGNORE}="1"', 'ATTRS{idVendor}=="2341", ENV{ID_MM_DEVICE_IGNORE}="1"'},
        'tmk': {_deprecated_udev_rule("feed")}
    }

    if udev_dir.exists():
        udev_rules = [rule_file for rule_file in udev_dir.glob('*.rules')]
        current_rules = set()

        # Collect all rules from the config files
        for rule_file in udev_rules:
            for line in rule_file.read_text().split('\n'):
                line = line.strip()
                if not line.startswith("#") and len(line):
                    current_rules.add(line)

        # Check if the desired rules are among the currently present rules
        for bootloader, rules in desired_rules.items():
            # For caterina, check if ModemManager is running
            if bootloader == "caterina":
                if check_modem_manager():
                    ok = False
                    cli.log.warn("{bg_yellow}Detected ModemManager without the necessary udev rules. Please either disable it or set the appropriate udev rules if you are using a Pro Micro.")
            if not rules.issubset(current_rules):
                deprecated_rule = deprecated_rules.get(bootloader)
                if deprecated_rule and deprecated_rule.issubset(current_rules):
                    cli.log.warn("{bg_yellow}Found old, deprecated udev rules for '%s' boards. The new rules on https://docs.qmk.fm/#/faq_build?id=linux-udev-rules offer better security with the same functionality.", bootloader)
                else:
                    cli.log.warn("{bg_yellow}Missing udev rules for '%s' boards. See https://docs.qmk.fm/#/faq_build?id=linux-udev-rules for more details.", bootloader)

    return ok


def check_modem_manager():
    """Returns True if ModemManager is running.
    """
    if shutil.which("systemctl"):
        mm_check = run(["systemctl", "--quiet", "is-active", "ModemManager.service"], timeout=10)
        if mm_check.returncode == 0:
            return True
=======
def os_tests():
    """Determine our OS and run platform specific tests
    """
    platform_id = platform.platform().lower()
<<<<<<< HEAD
>>>>>>> dontTouch/master
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
>>>>>>> UpdateQMK
=======
def os_tests():
    """Determine our OS and run platform specific tests
    """
    platform_id = platform.platform().lower()
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445

    if 'darwin' in platform_id or 'macos' in platform_id:
        return os_test_macos()
    elif 'linux' in platform_id:
        return os_test_linux()
    elif 'windows' in platform_id:
        return os_test_windows()
    else:
        cli.log.warning('Unsupported OS detected: %s', platform_id)
        return CheckStatus.WARNING


def os_test_linux():
    """Run the Linux specific tests.
    """
    cli.log.info("Detected {fg_cyan}Linux.")
    from qmk.os_helpers.linux import check_udev_rules

    return check_udev_rules()


def os_test_macos():
    """Run the Mac specific tests.
    """
    cli.log.info("Detected {fg_cyan}macOS.")

    return CheckStatus.OK


def os_test_windows():
    """Run the Windows specific tests.
    """
    cli.log.info("Detected {fg_cyan}Windows.")

    return CheckStatus.OK


@cli.argument('-y', '--yes', action='store_true', arg_only=True, help='Answer yes to all questions.')
@cli.argument('-n', '--no', action='store_true', arg_only=True, help='Answer no to all questions.')
@cli.subcommand('Basic QMK environment checks')
def doctor(cli):
    """Basic QMK environment checks.

    This is currently very simple, it just checks that all the expected binaries are on your system.

    TODO(unclaimed):
        * [ ] Compile a trivial program with each compiler
    """
    cli.log.info('QMK Doctor is checking your environment.')

    status = os_tests()

    cli.log.info('QMK home: {fg_cyan}%s', QMK_FIRMWARE)

    # Make sure our QMK home is a Git repo
    git_ok = check_git_repo()

    if git_ok == CheckStatus.WARNING:
        cli.log.warning("QMK home does not appear to be a Git repository! (no .git folder)")
        status = CheckStatus.WARNING
<<<<<<< HEAD

    cli.log.info('QMK home: {fg_cyan}%s', QMK_FIRMWARE)
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445

    # Make sure the basic CLI tools we need are available and can be executed.
    bin_ok = check_binaries()

    if not bin_ok:
        if yesno('Would you like to install dependencies?', default=True):
            run(['util/qmk_install.sh'])
            bin_ok = check_binaries()

    if bin_ok:
        cli.log.info('All dependencies are installed.')
    else:
        status = CheckStatus.ERROR

    # Make sure the tools are at the correct version
    ver_ok = check_binary_versions()
    if CheckStatus.ERROR in ver_ok:
        status = CheckStatus.ERROR
    elif CheckStatus.WARNING in ver_ok and status == CheckStatus.OK:
        status = CheckStatus.WARNING

    # Check out the QMK submodules
    sub_ok = check_submodules()

    if sub_ok == CheckStatus.OK:
        cli.log.info('Submodules are up to date.')
    else:
        if yesno('Would you like to clone the submodules?', default=True):
            submodules.update()
            sub_ok = check_submodules()

        if CheckStatus.ERROR in sub_ok:
            status = CheckStatus.ERROR
        elif CheckStatus.WARNING in sub_ok and status == CheckStatus.OK:
            status = CheckStatus.WARNING

    # Report a summary of our findings to the user
    if status == CheckStatus.OK:
        cli.log.info('{fg_green}QMK is ready to go')
        return 0
    elif status == CheckStatus.WARNING:
        cli.log.info('{fg_yellow}QMK is ready to go, but minor problems were found')
        return 1
    else:
<<<<<<< HEAD
<<<<<<< HEAD
        cli.log.info('{fg_yellow}Problems detected, please fix these problems before proceeding.')
        # FIXME(skullydazed/unclaimed): Link to a document about troubleshooting, or discord or something

    return ok
=======
        cli.log.info('{fg_red}Major problems detected, please fix these problems before proceeding.')
        cli.log.info('{fg_blue}Check out the FAQ (https://docs.qmk.fm/#/faq_build) or join the QMK Discord (https://discord.gg/Uq7gcHh) for help.')
        return 2
<<<<<<< HEAD
>>>>>>> dontTouch/master
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
>>>>>>> UpdateQMK
=======
        cli.log.info('{fg_red}Major problems detected, please fix these problems before proceeding.')
        cli.log.info('{fg_blue}Check out the FAQ (https://docs.qmk.fm/#/faq_build) or join the QMK Discord (https://discord.gg/Uq7gcHh) for help.')
        return 2
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
