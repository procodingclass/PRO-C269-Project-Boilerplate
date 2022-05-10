#include <Adafruit_NeoPixel.h>

// NeoPixel LED controls
const byte data_pin = 11;
const byte led_num = 16;

// creating an object
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(led_num, data_pin, NEO_GRB + NEO_KHZ800);

int led_index=8;

// variable to helps us assign colors
int c=128;

// add the pins for joystick here
// const byte hpin = ;
// const byte vpin = ;

void setup(){

  Serial.begin(9600);

  pixels.begin(); // initialize the library
  pixels.show();
}

void loop(){

  check_direction();
  
  pixels.show();
  delay(100);

}

void check_direction(){



}