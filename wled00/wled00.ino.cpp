# 1 "/tmp/tmp0si21dc7"
#include <Arduino.h>
# 1 "/home/u/Documents/WLED/wled00/wled00.ino"
# 13 "/home/u/Documents/WLED/wled00/wled00.ino"
#include "wled.h"
void setup();
void loop();
#line 15 "/home/u/Documents/WLED/wled00/wled00.ino"
void setup() {
  WLED::instance().setup();
}

void loop() {
  WLED::instance().loop();
}