# Tensorfow Micro Speech example with Mbed Speech

### Tensorflow Library
https://github.com/tensorflow/tensorflow/tree/master/tensorflow/lite/experimental/micro/examples/micro_speech

### Adafruit Micro Speech Demo using External Mic
https://learn.adafruit.com/tensorflow-lite-for-edgebadge-kit-quickstart/micro-speech-demo

### Main Audio Processing File
audio_provider.cpp

### Dev Board
NUCLEO-F429ZI with Mbed OS 5 - https://os.mbed.com/platforms/ST-Nucleo-F429ZI/
Adafruit MAX9814 Microphone - https://learn.adafruit.com/adafruit-agc-electret-microphone-amplifier-max9814/overview

### Mbed OS 5 Docs
https://os.mbed.com/docs/mbed-os/v5.14/apis/index.html

## Setup
1. Install [mbed-cli](https://os.mbed.com/docs/mbed-os/v5.9/tutorials/quick-start-offline.html)
2. Install the [GNU Arm Embedded Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads)
3. If the toolchain is installed to the default path, configure GCC_ARM_PATH as below:
```
mbed config -G GCC_ARM_PATH "C:\Program Files (x86)\GNU Tools ARM Embedded\9 2019-q4-major/bin"
```
4. Clone this repo
5. To load the dependencies, run:
```
mbed config root .
mbed deploy
```
6. To compile the program, make sure the board is plugged in to the computer and run:
```
mbed compile -m auto -t GCC_ARM
```

This should give you a .bin file in the BUILD folder which can be flashed to the board by dragging the file
to the mounted volume.

7. Download Putty
8. Connect through serial port COM3
