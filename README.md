# ES3C28P – ESP Hardware Testing

A collection of hardware feature tests for the **ES3C28P** ESP-based development board.  
This project is a work in progress — more features and board models will be added over time.

---

## Current Features

### TFT Display (`TFT_eSPI`)
- Initializes the TFT screen using the [`TFT_eSPI`](https://github.com/Bodmer/TFT_eSPI) library
- Fills the screen with a black background
- Displays the board name centered on screen

---

## Requirements

- **Board:** ES3C28P (ESP-based)
- **Framework:** Arduino
- **Library:** [TFT_eSPI](https://github.com/Bodmer/TFT_eSPI) by Bodmer

> ⚠️ Make sure to configure `TFT_eSPI` properly for your display (pins, driver, resolution) via the library's `User_Setup.h` file or via `config.h`.

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

