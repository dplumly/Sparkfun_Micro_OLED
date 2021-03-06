/******************************************************************************
 Original Sketch by
  Joel Bartlett @ SparkFun Electronics
  
 This sketch shows you how to draw a 64x48 pixel Bitmap image on the MicroOLED.
  
  Hardware Connections:
    MicroOLED ------------- Arduino
      GND ------------------- GND
      VDD ------------------- 3.3V (VCC)
    D1/MOSI ----------------- D11 (don't change)
    D0/SCK ------------------ D13 (don't change)
      D2
      D/C ------------------- D8 (can be any digital pin)
      RST ------------------- D9 (can be any digital pin)
      CS  ------------------- D10 (can be any digital pin)
    
  Development environment specifics:
  	IDE: Arduino 1.0.5
  	Hardware Platform: MicroOLED Breakout
                           Arduino Pro 3.3V/8MHz
  
  Note: The display on the MicroOLED is a 1.8V-3.3V device only.
  Don't try to connect a 5V Arduino directly to it! Use level
  shifters in between the data signals if you have to resort to
  a 5V board.
    
    
*******************************************************************************/
#include <Wire.h>  // Include Wire if you're using I2C
#include <SPI.h>  // Include SPI if you're using SPI
#include <SFE_MicroOLED.h>  // Include the SFE_MicroOLED library

//////////////////////////
// MicroOLED Definition //
//////////////////////////
#define PIN_RESET 9  // Connect RST to pin 9 (req. for SPI and I2C)
#define PIN_DC    8  // Connect DC to pin 8 (required for SPI)
#define PIN_CS    10 // Connect CS to pin 10 (required for SPI)
#define DC_JUMPER 0
// Also connect pin 13 to SCK and pin 11 to MOSI

//////////////////////////////////
// MicroOLED Object Declaration //
//////////////////////////////////
// Declare a MicroOLED object. The parameters include:
// 1 - Reset pin: Any digital pin
// 2 - D/C pin: Any digital pin (SPI mode only)
// 3 - CS pin: Any digital pin (SPI mode only, 10 recommended)
MicroOLED oled(PIN_RESET, PIN_DC, PIN_CS);
//MicroOLED oled(PIN_RESET, DC_JUMPER); // Example I2C declaration


/*******************************************************************************
Screen size is 64px x 48px
Make the image in Photoshop or comparable program to make image that size
*******************************************************************************/

// FOR WINDOWS
//------------------------------------------------------------------------------
// File generated by LCD Assistant
// http://en.radzio.dxp.pl/bitmap_converter/
//------------------------------------------------------------------------------

// FOR MAC
//------------------------------------------------------------------------------
// File generated by LCD Assistant
//http://forum.allaboutcircuits.com/threads/lcd-creator-for-mac-osx.98440/
//------------------------------------------------------------------------------


//This is the array that holds the Bitmap image. The easiest way to convert a bmp
//to an array is to use the LCD Assistant linked above. 
uint8_t bones [] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFC, 0xFE, 0xFE, 
	0xFE, 0xFE, 0xFC, 0xFC, 0xFC, 0xF8, 0xF8, 0xF0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x3F, 0x3F, 0x3F, 0x7F, 0xFF, 
	0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x7F, 0xFF, 0xFF, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x18, 0x38, 0x70, 0xF0, 0xF8, 0xF8, 0x9E, 0x87, 
	0x87, 0x8F, 0xFC, 0xF8, 0xF0, 0xF0, 0x30, 0x38, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x18, 0x11, 0x33, 0x23, 0x23, 0x63, 
	0x63, 0x23, 0x23, 0x23, 0x31, 0x18, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x03, 0x06, 0x06, 0x0C, 0x0C, 0x18, 0x98, 0xF0, 0xF0, 0x60, 
	0x60, 0xF0, 0xF0, 0x98, 0x18, 0x0C, 0x0C, 0x06, 0x06, 0x03, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x3C, 0x78, 0x78, 0x3C, 0x0C, 0x06, 0x02, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x02, 0x06, 0x0C, 0x3C, 0x78, 0x78, 0x3C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

// Original Example

/*uint8_t lift [] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xE0, 0xF0, 0xB8, 0x98, 0x0C, 
	0x06, 0x0C, 0x98, 0xB8, 0xF0, 0xE0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xE0, 0xF0, 0x38, 0x18, 0x1C, 0x0C, 0x0C, 0x0E, 0x0E, 0x06, 0x06, 0x37, 0x7F, 0x7F, 0x70, 
	0x70, 0x70, 0x7F, 0x7F, 0x37, 0x06, 0x06, 0x06, 0x0E, 0x0C, 0x0C, 0x1C, 0x18, 0x38, 0xF0, 0xE0, 
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xF9, 0xFB, 0x8F, 0x8E, 0x06, 0x06, 0x0C, 0x0C, 0x0C, 0x0C, 0x1C, 0x1C, 0x18, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x18, 0x1C, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0x06, 0x06, 0x8E, 0x8F, 0xFB, 0xF9, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xFF, 0xFF, 0x01, 0x03, 0x03, 0x03, 0x07, 0x06, 0x06, 0x06, 0x06, 0x0E, 0x0E, 0x0E, 0x0E, 
	0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x03, 0x03, 0x01, 0xFF, 0xFF, 
	0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 
	0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x03, 0x06, 0x06, 0x0C, 0x0C, 0x1C, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x38, 0x38, 
	0x38, 0x38, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x1C, 0x0C, 0x0C, 0x0E, 0x06, 0x03, 0x03, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};*/


void setup()
{
  // These three lines of code are all you need to initialize the
  // OLED and print the splash screen.
  
  // Before you can start using the OLED, call begin() to init
  // all of the pins and configure the OLED.
  
  oled.begin();
  // clear(ALL) will clear out the OLED's graphic memory.
  // clear(PAGE) will clear the Arduino's display buffer.
  
  oled.clear(ALL);  // Clear the display's memory (gets rid of artifacts)
  // To actually draw anything on the display, you must call the
  // display() function. 
  
  oled.display();   
  delay(0);  //pause for the splash screen
  //Note: You can change the spalsh screen by editing the array founf in the library source code
  
  oled.clear(PAGE);  //clear the screen before we draw our image
  
  oled.drawBitmap(bones);  //Change this to the name of your variable
  oled.display();//display the image 
  
}

void loop()
{
}
