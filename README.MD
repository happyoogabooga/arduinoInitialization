# The Full Process of Running a Program
This readme goes through every step you would need to upload code to an arduino, in this document, commands will be in bullet points.
## Initialization
- arduino-cli sketch new newsketch
Type the above line into your terminal, it creates a new sketch which in this case would be called newsketch, after running this you should see a subdirecty appear in the directory you are currently in, and it should contain a .ino file, in this case both the subdirectory and the .ino will be named newsketch, and newsketch.ino repectively. A sketch is just a place where all of your source files live.
## The Compilation Process:

<p style="color:red">You cannot just copy my commands for this, you must follow the process

- arduino-cli board list

Assuming you have connected your board to your pc, running the above command will display whether or not your board is connected, if your board is not connected, you will see a message saying "No boards found". If your board is connected you should see a message that resembles the following:
```
Port Protocol Type              Board Name  FQBN            Core
COM3 serial   Serial Port (USB) Arduino Uno arduino:avr:uno arduino:avr
```
port, core, and FQBN are all we need for right now. If you have an error with you're core(this is just a library of arduino functions), you may need to do a core install, in which case, both of the below commands would work, however only do one, not both.

- arduino-cli core install arduino:samd
or
- arduino-cli core install arduino:avr

Note if you want to install 3rd party cores, refer to the link at the bottom of this document in its "adding 3rd party cores" section

- arduino-cli compile --fqbn arduino:avr:uno newsketch

use the above command to compile you're ino file, note the --fqbn for me may not be the same for you, refer to the output of your arduino-cli board list command to get the correct fqbn. Likewise my sketch may not have the same name as yours, so be sure to put the name of your sketch in the place of newsketch.

## Upload to Arduino
<p style="color:red"> as mentioned, don't just copy and paste these commands

- arduino-cli upload -p COM3  --fqbn arduino:avr:uno newsketch

notice here that COM3 is the port my arduino was connected to, as seen after running the arduino-cli board list command, also as seen before, I have my fqbn(fully quallified board name) and also the name of my sketch.

---

## problems
this is meant to be a minimal quick start guide so, if you have any deeper questions or problems, the following link may provide some help

[CLICK HERE](https://docs.arduino.cc/arduino-cli/getting-started/?_gl=1*1j2csxi*_up*MQ..*_ga*NDA5MzgxMjEzLjE3OTA5MjIxODc.*_ga_NEXN8H46L5*czE3OTA5MjIxODYkbzEkZzEkdDE3OTA5MjIyNzAkajYwJGwwJGg1MDgwMTg4MjM.)
