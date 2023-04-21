| Supported Targets | ESP32 |
| ----------------- | ----- | 
# libcsp v2 port example

This starts an example of a server-client between two tasks in a esp32
The idea is to check whether this works and then apply it to the SUCHAI flight software!

Any comments are welcome!

## Setup!
1. get the espressif idf
2. clone this repo in the same directory where the esp-idf directory is.
3. use the command `get_idf` or `. export ...` to activate the venv of espressif idf.(see the tutorial) 
4. `cd esp32_to_sfs`
5. Use `git submodule init` and `git submodule update`
6. `idf.py build` to build the project
7. `idf.py flash` to flash it to the esp32
