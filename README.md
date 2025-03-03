ESP Speed Test

## A - WiFi AP
* creates "espeed" WiFi network
* Run DHCP
* Hosts Web Page
* Respond to Speed Test

## B - WiFi Client Device
* connects to "espeed" WiFi network
* get IP address
* Hosts Web page
* Drive Speed test

## C - Computer/Phone with Web Browser
* connects to "espeed" network
* connects to B HTTP Web Page
* control Speed Test

# Speed test

* C starts Speed test via A Web Page
* A initiates speed test to B
* A sends data to B
* B checks data
* A collects stats
* A reports stats to C via Web Page


# AP

```sh
wifi_mode ap
ap_set espeed -a open
wifi_txpower -u 83
iperf -s -i 3 -t 360
```

## UDP

```sh
iperf -s -i 3 -u
```

# STA

```sh
wifi_mode sta
sta_connect espeed
wifi_txpower -u 83
iperf -c 192.168.4.1 -i 3 -t 360
```
## UDP

```sh
iperf -c 192.168.4.1 -i 3 -t 60 -u
```

## iperf

```
esp-idf/examples/wifi/iperf
```


```bash
cd ~/work/github/espressif/esp-idf
git pull
git submodule update --init --recursive
./install.sh esp32c6

cd ~/work/github/espressif/esp-idf/examples/wifi/iperf

. ~/work/github/espressif/esp-idf/export.sh

idf.py set-target esp32c6

idf.py build # just build

idf.py -p /dev/ttyACM0 flash # build & flash

idf.py -p /dev/ttyACM0 flash monitor # build & flash & monitor -> exit Ctrl+]

tio /dev/ttyACM0      # Quit: ctrl-t q


```
