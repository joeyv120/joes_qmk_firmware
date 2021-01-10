/* Address for jumping to bootloader on STM32 chips. */
/* It is chip dependent, the correct number can be looked up here:
 * http://www.st.com/web/en/resource/technical/document/application_note/CD00167594.pdf
<<<<<<< HEAD
 * This also requires a patch to chibios:
 *  <tmk_dir>/tmk_core/tool/chibios/ch-bootloader-jump.patch
=======
>>>>>>> dontTouch/master
 */
#define STM32_BOOTLOADER_ADDRESS 0x1FFF0000
