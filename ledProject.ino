#include <FastLED.h>

#define numLEDS 60  //Number of LEDS on strip (will change on real strip)
#define ledPin 33   //Data pin connected to led strip

CRGB leds[numLEDS]; //Create array for led strip of 60 characters (# of leds)

// Gradient color variables
int red1 = 0, green1 = 0, blue1 = 0; // First gradient color
int red2 = 0, green2 = 0, blue2 = 0; // Second gradient color

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812B, ledPin, GRB>(leds, numLEDS);
  FastLED.setBrightness(50);    //Anything from 0-255
  
  Serial.begin(115200); 
}

void setGradient(CRGB color1, CRGB color2) {
  for (int i = 0; i < numLEDS; i++) {
    float ratio = float(i) / (numLEDS - 1); // Calculate the blend ratio for each LED
    leds[i] = blend(color1, color2, int(ratio * 255)); // Blend the colors
  }
  FastLED.show(); // Update the LED strip
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n'); // Read the input until a newline

     // Parse the input string
    int values[6]; // Store the six RGB values for both colors
    int valueIndex = 0;

    // Split the input string by spaces and convert each value
    for (int i = 0; i < input.length(); i++) {
      if (input[i] == ' ' || i == input.length() - 1) {
        String part = input.substring(i - 3, i);  // Extract each 3-digit value
        values[valueIndex] = part.toInt();
        valueIndex++;
      }
    }

    // Assign parsed values to the gradient color variables
    red1 = values[0];
    green1 = values[1];
    blue1 = values[2];
    red2 = values[3];
    green2 = values[4];
    blue2 = values[5];

      // Apply gradient after every command
      setGradient(CRGB(red1, green1, blue1), CRGB(red2, green2, blue2));
  }
}