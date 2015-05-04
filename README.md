# Sparkfun Micro OLED
Sparkfuns Micro OLED uploading custom bitmaps

Way to upload custom 64px x 48px bimaps to a Sparkfun Micro OLED.

Documentation is in the .ino as well as what is listed below.


| MicroOLED     | Arduino       |
| ------------- | ------------- |
| GND           | GND           |
| VDD           | 3.3 VCC       |
| D1/MOSI       | D11           |
| D0/SCK        | D13           |
| D2/SDO        | Leave Open    |
| D/C           | D8            |
| RST           | D9            |
| CS            | D10           |

Ths orignal sketch was written by Joel Bartlett @ SparkFun. The hardest part of this was to find an image converter for Mac found by Chad Woods. 

Mac: http://forum.allaboutcircuits.com/threads/lcd-creator-for-mac-osx.98440/

Windows: http://en.radzio.dxp.pl/bitmap_converter/

Download one of these and use it to convert your image. Make sure you make it to  the correct dimensions in Photoshop or some image editor. After you get the bitmap code paste it into the code block and upload to the board. You can change the name of the bitmap if needed. It is listed in the code on where to change it.
