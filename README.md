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
idf.py -p /dev/ttyACM0 monitor
wifi_mode ap
ap_set espeed -a open
wifi_txpower -u 83
iperf -s -i 3
```

## UDP

```sh
iperf -s -i 3 -u
```

# STA

```sh
idf.py -p /dev/ttyACM1 monitor
sta_connect espeed
wifi_txpower -u 83
iperf -c 192.168.4.1 -i 3 -t 60
```
## UDP

```sh
iperf -c 192.168.4.1 -i 3 -t 60 -u
```