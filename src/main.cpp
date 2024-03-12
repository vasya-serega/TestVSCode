#include <ArduinoProxy.h>

ArduinoProxy proxy;

void setup() {
  proxy.Init();
}

void loop() {
  proxy.ExecuteLoop();
}