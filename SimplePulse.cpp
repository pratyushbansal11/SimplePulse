#include "SimplePulse.h"

long SimplePulse::read(int pin, bool state) {
  while (digitalRead(pin) != state);
  long t = micros();
  while (digitalRead(pin) == state);
  return micros() - t;
}
