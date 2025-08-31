#ifndef SIMPLEPULSE_H
#define SIMPLEPULSE_H

#include <Arduino.h>

class SimplePulse {
  public:
    // Measure pulse duration
    static long read(int pin, bool state);
};

#endif