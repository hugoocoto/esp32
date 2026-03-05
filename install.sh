#!/bin/bash

mkdir -p ~/esp
cd ~/esp
git clone --recursive https://github.com/espressif/esp-idf.git

cd ~/esp/esp-idf
./install.sh esp32
