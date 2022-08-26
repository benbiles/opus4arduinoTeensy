# opus4arduinoTeensy
 
a rework of opus4teensy to allow build in arduino IDE rather than only platform IO

it's basically a realtime CELT audio encoder / decoder for teensy 4.0 or 4.1 as other functionality
like SILK codec seams to be disabled.

this is a rework of this project which compiles and work on platform IO using build flags to pass global defines to GCC
https://github.com/mgergos/Opus4Teensy


build and works on arduio 1.8.16 with TeensyDuino 1.54

It crashes out with a bootloader error ( 9 flashing red LED's ) on arduino 1.8.18 and teensyDuino 1.57

I'll try to update the newest possible build combo here whne I know myself.

TODO: stero encoding decoding , the teensy module code needs to accomadate more than 1 channel.

 


