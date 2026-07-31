# Inkplate 6 MOTION tests

One small proof of concept per folder for the Inkplate 6 MOTION.

## Toolchain

- VS Code for editing
- Arduino CLI for compiling and uploading
- Inkplate MOTION board package and Arduino library
- STM32CubeProgrammer for STM32 upload support

The board application runs on the STM32H743. The ESP32-C3 is the pre-flashed wireless co-processor; do not overwrite its firmware.

## First test

Open `tests/01-hello-inkplate/01-hello-inkplate.ino` in Arduino IDE or VS Code.

1. Connect the board with USB-C and power it on.
2. Press the PROGRAMMING button next to USER2.
3. Confirm the serial port reports `Programming mode active.` at 115200 baud.
4. Select the Inkplate MOTION board and upload.

The first test should display `Hello Inkplate!`.

If the automatic upload does not find the board, set the rear BOOT switch to `1`, press RESET, upload, and return BOOT to `0` afterward.

## Tests

1. `01-hello-inkplate` — initialize the display and print text
2. `02-display-basics` — draw shapes and test rotation
3. `03-grayscale` — display grayscale bands
4. `04-partial-refresh` — test partial updates and ghosting
5. `05-buttons` — read the three side buttons
6. `06-rotary-rgb` — read the rotary encoder and RGB indicator
7. `07-motion-sensor` — read accelerometer and gyroscope values
8. `08-environment-sensor` — read temperature and humidity
9. `09-rtc-sleep` — display time and test deep sleep
10. `10-connectivity` — connect to Wi-Fi and display a short response
