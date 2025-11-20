// patterns.c
// Pattern animations for 4x4x4 LED Cube
// Written by Mukul G

#include <Arduino.h>
#include "patterns.h"

extern int layers[4];
extern int columns[16];

// Helper function to turn ON a specific LED
void ledOn(int layer, int col) {
  digitalWrite(layers[layer], HIGH);
  digitalWrite(columns[col], HIGH);
}

// Helper function to turn OFF
void ledOff(int layer, int col) {
  digitalWrite(layers[layer], LOW);
  digitalWrite(columns[col], LOW);
}

// ---------------------------------------------------------
// PATTERN 1: Rain Effect (LEDs fall from top to bottom)
// ---------------------------------------------------------
void rainEffect() {
  for(int col = 0; col < 16; col++) {
    for(int layer = 0; layer < 4; layer++) {
      ledOn(layer, col);
      delay(40);
      ledOff(layer, col);
    }
  }
}

// ---------------------------------------------------------
// PATTERN 2: Wave Up and Down
// ---------------------------------------------------------
void waveUpDown() {
  for(int i = 0; i < 4; i++) {
    digitalWrite(layers[i], HIGH);
    delay(100);
    digitalWrite(layers[i], LOW);
  }

  for(int i = 3; i >= 0; i--) {
    digitalWrite(layers[i], HIGH);
    delay(100);
    digitalWrite(layers[i], LOW);
  }
}

// ---------------------------------------------------------
// PATTERN 3: Blink each layer
// ---------------------------------------------------------
void layerBlink() {
  for(int i = 0; i < 4; i++) {
    digitalWrite(layers[i], HIGH);
    delay(150);
    digitalWrite(layers[i], LOW);
  }
}

// ---------------------------------------------------------
// PATTERN 4: Random Sparkles
// ---------------------------------------------------------
void randomSparkles() {
  for(int i = 0; i < 40; i++) {
    int rLayer = random(0,4);
    int rCol   = random(0,16);

    ledOn(rLayer, rCol);
    delay(30);
    ledOff(rLayer, rCol);
  }
}

// ---------------------------------------------------------
// PATTERN 5: Fill and Empty Effect
// ---------------------------------------------------------
void fillAndEmpty() {
  // Fill
  for(int layer = 0; layer < 4; layer++) {
    for(int col = 0; col < 16; col++){
      ledOn(layer, col);
      delay(20);
    }
  }

  delay(200);

  // Empty
  for(int layer = 0; layer < 4; layer++) {
    for(int col = 0; col < 16; col++){
      ledOff(layer, col);
      delay(20);
    }
  }
}
