/* Address for jumping to bootloader on STM32 chips. */
/* It is chip dependent, the correct number can be looked up here (page 175):
 * http://www.st.com/web/en/resource/technical/document/application_note/CD00167594.pdf
<<<<<<< HEAD
<<<<<<< HEAD
 * This also requires a patch to chibios:
 *  <tmk_dir>/tmk_core/tool/chibios/ch-bootloader-jump.patch
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
 */
#define STM32_BOOTLOADER_ADDRESS 0x1FFFC800
