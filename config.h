#pragma once


#define TFT_ORIENTATION 1

/*   ES3C28P   */
#define DISABLE_ALL_LIBRARY_WARNINGS 1

//TFT ESPI
#define USER_SETUP_LOADED
#define ILI9341_2_DRIVER
#define TFT_INVERSION_ON

#define TFT_WIDTH 240
#define TFT_HEIGHT 320

#define TFT_MISO 13
#define TFT_MOSI 11
#define TFT_SCLK 12

#define TFT_CS 10
#define TFT_DC 46
#define TFT_RST -1 // (shared with board reset)
#define TFT_BL 45 
#define TFT_BACKLIGHT_ON HIGH

#define TOUCH_CS -1 // touch screen -> custom lib

//#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
//#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
//#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
//#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
//#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:-.
//#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
//#define LOAD_FONT8N // Font 8. Alternative to Font 8 above, slightly narrower, so 3 digits fit a 160 pixel TFT
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts
#define SMOOTH_FONT

#define SPI_FREQUENCY 40000000
#define SPI_READ_FREQUENCY 20000000

//I2C : touch, audio, expansion 
#define I2C_SDA  16
#define I2C_SCL  15

//touch
#define TOUCH_SDA  16
#define TOUCH_SCL  15
#define TOUCH_RST  18
#define TOUCH_INT  17

//RGB
#define RGB_PIN 42

// Audio I/O ES8311
#define I2S_MCLK      4
#define I2S_DOUT      8
#define I2S_BCLK      5
#define I2S_LRC       7

//MIC
#define I2S_SCLK      5
#define I2S_DATA      6

// SD Card I/O
#define SD_CLK_PIN      38
#define SD_CMD_PIN      40 
#define SD_D0_PIN       39
#define SD_D1_PIN       41 
#define SD_D2_PIN       48 
#define SD_D3_PIN       47 
