# pic-programming
PIC18F4550 playground

## Prerequisites:
### PICkit 3 Programmer
https://download.freedownloadmanager.org/Windows-PC/PICkit/FREE-3.10.html

### MPLAB XC8 compiler:
https://www.microchip.com/en-us/tools-resources/develop/mplab-xc-compilers/xc8#downloads
Make sure to choose to install it to Windows path.

## How to launch?
1. Compile C file into HEX with the help of XC8 compiler:
> xc8-cc -mcpu=18f4550 button_led.c
2. Connect device to USB
3. Make sure PICkit 3 is has detected the Device: PIC18F4550
4. Import the .hex file
5. On VDD PICkit 3 option check the "On" option and check that 5,0 is the value of volts for the device
<img width="526" height="268" alt="image" src="https://github.com/user-attachments/assets/84b18bb1-b669-4c7b-bc73-b2a0c9be5747" />

6. Click Write
