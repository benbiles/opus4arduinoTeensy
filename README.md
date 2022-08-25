# opus4arduinoTeensy
rework of opus4teensy to allow build in arduino rather than only platform IO

it's basically only using the CELT encoder / decoder

this is a rework of this project which compiles and work on platform IO using build flags to pass global defines to GCC

https://github.com/mgergos/Opus4Teensy

so far the only main differnce is the global defines for the library are in global_lib_defines.h which is inluded in every file in the library.

unfortuantely this is locking the tennsy4.1 after compile / upload to teensy in arduino IDE. 

work in progress! 


