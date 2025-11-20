// cube-driver.c
// Main driver code for 4x4x4 LED Cube
// Written by Mukul G

#include <Arduino.h>
#include "patterns.h"

// Layers (L1–L4)
int layers[4] = {2, 3, 4, 5};

// Columns (16 LEDs)
int columns[16] = {
  6, 7, 8, 9,
  10, 11, 12, 13,
  A0, A1, A2, A3,
  A4, A5, A6, A7
};

void setup() {
  // Set all layer pins as OUTPUT
  for(int i = 0; i < 4; i++){
    pinMode(layers[i], OUTPUT);
    digitalWrite(layers[i], LOW);
  }

  // Set all column pins as OUTPUT
  for(int i = 0; i < 16; i++){
    pinMode(columns[i], OUTPUT);
    digitalWrite(columns[i], LOW);
  }
}

void loop() {
  // Call lighting patterns from patterns.c
  rainEffect();
  delay(100);

  waveUpDown();
  delay(100);

  layerBlink();
  delay(100);

  randomSparkles();
  delay(100);

  fillAndEmpty();
  delay(100);
}
