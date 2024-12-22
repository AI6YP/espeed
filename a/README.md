
```bash
cd ~/work/github/espressif/esp-idf
git pull
git submodule update --init --recursive
./install.sh esp32c6

cd ~/work/github/AI6YP/espeed/a
. ~/work/github/espressif/esp-idf/export.sh

idf.py set-target esp32c6

idf.py build # just build

idf.py -p /dev/ttyACM0 flash # build & flash

idf.py -p /dev/ttyACM0 flash monitor # build & flash & monitor -> exit Ctrl+]
```
