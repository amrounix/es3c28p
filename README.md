# ES3C28P – ESP Hardware Testing

A collection of hardware feature tests for the **ES3C28P** ESP-based development board.  
This project is a work in progress — more features and board models will be added over time.

---

## Current Features

### TFT Display (`TFT_eSPI`)
- Initializes the TFT screen using the [`TFT_eSPI`](https://github.com/Bodmer/TFT_eSPI) library
- Fills the screen with a black background
- Displays the board name centered on screen

### RGB LED (`WS2812B`)
- Single WS2812B LED controlled via GPIO 42
- Cycles through random colors in sync with a periodic timer

### Touch Screen (`TouchDrv` + `SensorLib`)
- Custom `TouchDrv` wrapper class that selects the I2C touch driver at **compile time** based on a `#define` in `config_es3c28p.h`
- Currently configured with `FT6X36_DRIVER` (FT6X36 capacitive touch controller)
- Supports `FT6X36_DRIVER`, `CST_DRIVER`, and `GT911_DRIVER`
- Pin configuration (SDA, SCL, RST, INT) defined centrally in `config_es3c28p.h`

---

## Project Structure

- **Board:** ES3C28P (ESP-based)
- **Framework:** Arduino
- **Library:** [TFT_eSPI](https://github.com/Bodmer/TFT_eSPI) by Bodmer

> ⚠️ Make sure to configure `TFT_eSPI` properly for your display (pins, driver, resolution) via the library's `User_Setup.h` file or via `config.h`.

## Arduino Configuration

Board : ESP32 S3 Dev Module
USB CDC On Boot : Enabled
Flash Size : 16MB
Partition Scheme : 16M Flash (with FATFS)
Partition Size : 1024 KB
PSRAM : OPI

---

## Getting Started

1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/es3c28p.git
   ```
2. Open `es3c28p.ino` in the Arduino IDE.
3. Install the `TFT_eSPI` library via the Library Manager.
4. Configure the display settings in `config.h` to match your hardware.
5. Upload to your ES3C28P board.

---

