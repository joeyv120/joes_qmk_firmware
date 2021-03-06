#!/bin/bash

source util/travis_utils.sh
source util/travis_push.sh

set -o errexit -o nounset

rev=$(git rev-parse --short HEAD)
echo "Using git hash ${rev}"

if [[ "$TRAVIS_BRANCH" == "master" && "$TRAVIS_PULL_REQUEST" == "false" ]] ; then

git checkout master
<<<<<<< HEAD
<<<<<<< HEAD
git diff --diff-filter=AM --name-only -n 1 -z ${TRAVIS_COMMIT_RANGE} | xargs -0 dos2unix
git diff --diff-filter=AM --name-only -n 1 -z ${TRAVIS_COMMIT_RANGE} '*.c' '*.h' '*.cpp' | grep -z -e '^drivers' -e '^quantum' -e '^tests' -e '^tmk_core' | grep -zv -e 'quantum/template' -e 'tmk_core/protocol/usb_hid' -e 'platforms/chibios' | xargs -0 clang-format-7 -i
git diff --diff-filter=AM --name-only -n 1 -z ${TRAVIS_COMMIT_RANGE} | xargs -0 git add
git commit -m "format code according to conventions [skip ci]" && git push git@github.com:qmk/qmk_firmware.git master

increment_version ()
{
  declare -a part=( ${1//\./ } )
  part[2]=$((part[2] + 1))
  new="${part[*]}"
  echo -e "${new// /.}"
}
=======
<<<<<<< HEAD
>>>>>>> dontTouch/master
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
>>>>>>> UpdateQMK
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445

git diff --name-only -n 1 ${TRAVIS_COMMIT_RANGE}

if [[ "$TRAVIS_COMMIT_MESSAGE" != *"[skip build]"* ]] ; then
	make generate-keyboards-file SILENT=true > .keyboards
	cd ..
	git clone git@github.com:qmk/qmk.fm.git
	cd qmk.fm
	mv ../qmk_firmware/id_rsa_qmk.fm id_rsa_qmk.fm
	mv ../qmk_firmware/.keyboards .
	ssh-add -D
	eval `ssh-agent -s`
	ssh-add id_rsa_qmk.fm

	# don't delete files in case not all keyboards are built
	# rm -f compiled/*.hex

	# ignore errors here
	# In theory, this is more flexible, and will allow for additional expansion of additional types of files and other names
	mv ../qmk_firmware/*_default.*{hex,bin} ./compiled/ || true

	# get the list of keyboards
	readarray -t keyboards < .keyboards

	# replace / with _
	keyboards=("${keyboards[@]//[\/]/_}")

	# remove all binaries that don't belong to a keyboard in .keyboards
	for file in "./compiled"/* ; do
		match=0
		for keyboard in "${keyboards[@]}" ; do
			if [[ ${file##*/} = "${keyboard}_default.bin" ]] || [[ ${file##*/} = "${keyboard}_default.hex" ]]; then
				match=1
				break
			fi
		done
		if [[ $match = 0 ]]; then
			echo "Removing deprecated binary: $file"
			rm "$file"
		fi
	done

	bash _util/generate_keyboard_page.sh
	git add -A
	git commit -m "generated from qmk/qmk_firmware@${rev}"
	git push git@github.com:qmk/qmk.fm.git

fi

fi
