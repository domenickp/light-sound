#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define PIN 6

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(8, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

unsigned int sample;

void setup() {
  analogReference(EXTERNAL);
  strip.begin();
  strip.setBrightness(64);
  strip.show(); // Initialize all pixels to 'off'
  Serial.begin(9600);
}

void loop() {
//  // Some example procedures showing how to display to the pixels:
//  colorWipe(strip.Color(255, 0, 0), 50); // Red
//  colorWipe(strip.Color(0, 255, 0), 50); // Green
//  colorWipe(strip.Color(0, 0, 255), 50); // Blue
////colorWipe(strip.Color(0, 0, 0, 255), 50); // White RGBW
//  // Send a theater pixel chase in...
//  theaterChase(strip.Color(127, 127, 127), 50); // White
//  theaterChase(strip.Color(127, 0, 0), 50); // Red
//  theaterChase(strip.Color(0, 0, 127), 50); // Blue
//
//  rainbow(20);
//  rainbowCycle(20);
//  theaterChaseRainbow(50);

    strip.setPixelColor(0, strip.Color(0, 0, 0));
    strip.setPixelColor(1, strip.Color(0, 0, 0));
    strip.setPixelColor(2, strip.Color(0, 0, 0));
    strip.setPixelColor(3, strip.Color(0, 0, 0));
    strip.setPixelColor(4, strip.Color(0, 0, 0));
    strip.setPixelColor(5, strip.Color(0, 0, 0));
    strip.setPixelColor(6, strip.Color(0, 0, 0));
    strip.setPixelColor(7, strip.Color(0, 0, 0));
    strip.show();
  float soundVolts;
  soundVolts = sampleSound(); // Also happens to introduce a 50 ms wait
  Serial.println(soundVolts);

  if(soundVolts > 0.10) {
    strip.setPixelColor(1, strip.Color(255, 0, 0));
    strip.setPixelColor(1, strip.Color(0, 0, 0));
    strip.setPixelColor(2, strip.Color(0, 0, 0));
    strip.setPixelColor(3, strip.Color(0, 0, 0));
    strip.setPixelColor(4, strip.Color(0, 0, 0));
    strip.setPixelColor(5, strip.Color(0, 0, 0));
    strip.setPixelColor(6, strip.Color(0, 0, 0));
    strip.setPixelColor(7, strip.Color(0, 0, 0));
    strip.show();
    delay(50);
  }
  if(soundVolts > 0.40) {
    strip.setPixelColor(0, strip.Color(255, 0, 0));
    strip.setPixelColor(1, strip.Color(255, 128, 0));
    strip.setPixelColor(2, strip.Color(0, 0, 0));
    strip.setPixelColor(3, strip.Color(0, 0, 0));
    strip.setPixelColor(4, strip.Color(0, 0, 0));
    strip.setPixelColor(5, strip.Color(0, 0, 0));
    strip.setPixelColor(6, strip.Color(0, 0, 0));
    strip.setPixelColor(7, strip.Color(0, 0, 0));
    strip.show();
    delay(50);
  }
  if(soundVolts > 0.70) {
    strip.setPixelColor(0, strip.Color(255, 0, 0));
    strip.setPixelColor(1, strip.Color(255, 128, 0));
    strip.setPixelColor(2, strip.Color(255, 255, 0));
    strip.setPixelColor(3, strip.Color(0, 0, 0));
    strip.setPixelColor(4, strip.Color(0, 0, 0));
    strip.setPixelColor(5, strip.Color(0, 0, 0));
    strip.setPixelColor(6, strip.Color(0, 0, 0));
    strip.setPixelColor(7, strip.Color(0, 0, 0));
    strip.show();
    delay(50);
  }
  if(soundVolts > 1.10) {
    strip.setPixelColor(0, strip.Color(255, 0, 0));
    strip.setPixelColor(1, strip.Color(255, 128, 0));
    strip.setPixelColor(2, strip.Color(255, 255, 0));
    strip.setPixelColor(3, strip.Color(0, 255, 0));
    strip.setPixelColor(4, strip.Color(0, 0, 0));
    strip.setPixelColor(5, strip.Color(0, 0, 0));
    strip.setPixelColor(6, strip.Color(0, 0, 0));
    strip.setPixelColor(7, strip.Color(0, 0, 0));
    strip.show();
    delay(50);
  }
  if(soundVolts > 1.50) {
    strip.setPixelColor(0, strip.Color(255, 0, 0));
    strip.setPixelColor(1, strip.Color(255, 128, 0));
    strip.setPixelColor(2, strip.Color(255, 255, 0));
    strip.setPixelColor(3, strip.Color(0, 255, 0));
    strip.setPixelColor(4, strip.Color(0, 0, 255));
    strip.setPixelColor(5, strip.Color(0, 0, 0));
    strip.setPixelColor(6, strip.Color(0, 0, 0));
    strip.setPixelColor(7, strip.Color(0, 0, 0));
    strip.show();
    delay(50);
  }
  if(soundVolts > 1.90) {
    strip.setPixelColor(0, strip.Color(255, 0, 0));
    strip.setPixelColor(1, strip.Color(255, 128, 0));
    strip.setPixelColor(2, strip.Color(255, 255, 0));
    strip.setPixelColor(3, strip.Color(0, 255, 0));
    strip.setPixelColor(4, strip.Color(0, 0, 255));
    strip.setPixelColor(5, strip.Color(127, 0, 255));
    strip.setPixelColor(6, strip.Color(0, 0, 0));
    strip.setPixelColor(7, strip.Color(0, 0, 0));
    strip.show();
    delay(50);
  }
  if(soundVolts > 2.30) {
    strip.setPixelColor(0, strip.Color(255, 0, 0));
    strip.setPixelColor(1, strip.Color(255, 128, 0));
    strip.setPixelColor(2, strip.Color(255, 255, 0));
    strip.setPixelColor(3, strip.Color(0, 255, 0));
    strip.setPixelColor(4, strip.Color(0, 0, 255));
    strip.setPixelColor(5, strip.Color(127, 0, 255));
    strip.setPixelColor(6, strip.Color(255, 0, 127));
    strip.setPixelColor(7, strip.Color(0, 0, 0));
    strip.show();
    delay(50);
  }
  if(soundVolts > 2.70) {
    strip.setPixelColor(0, strip.Color(255, 0, 0));
    strip.setPixelColor(1, strip.Color(255, 128, 0));
    strip.setPixelColor(2, strip.Color(255, 255, 0));
    strip.setPixelColor(3, strip.Color(0, 255, 0));
    strip.setPixelColor(4, strip.Color(0, 0, 255));
    strip.setPixelColor(5, strip.Color(127, 0, 255));
    strip.setPixelColor(6, strip.Color(255, 0, 127));
    strip.setPixelColor(7, strip.Color(255, 255, 255));
    strip.show();
    delay(50);
    theaterChase(strip.Color(127, 127, 127), 50);
  }
  

//  // This is rainbowCycle
//  uint16_t i, j;
//
//  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
//    for(i=0; i< strip.numPixels(); i++) {
//      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
//    }
//    strip.show();
//    soundVolts = sampleSound(); // Also happens to introduce a 50 ms wait
//    Serial.println(soundVolts);
//  }

}

float sampleSound() {
   unsigned long startMillis= millis();  // Start of sample window
   unsigned int peakToPeak = 0;   // peak-to-peak level
 
   unsigned int signalMax = 0;
   unsigned int signalMin = 1024;

   // Sample window width in mS (50 mS = 20Hz)
   // collect data for 50 mS
   while (millis() - startMillis < 50)
   {
      sample = analogRead(0);
      if (sample < 1024)  // toss out spurious readings
      {
         if (sample > signalMax)
         {
            signalMax = sample;  // save just the max levels
         }
         else if (sample < signalMin)
         {
            signalMin = sample;  // save just the min levels
         }
      }
   }
   peakToPeak = signalMax - signalMin;  // max - min = peak-peak amplitude
   double volts = (peakToPeak * 5.0) / 1024;  // convert to volts
 
   return volts;
}

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}

void rainbow(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<10; j++) {  //do 10 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();

      delay(wait);

      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

//Theatre-style crawling lights with rainbow effect
void theaterChaseRainbow(uint8_t wait) {
  for (int j=0; j < 256; j++) {     // cycle all 256 colors in the wheel
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, Wheel( (i+j) % 255));    //turn every third pixel on
      }
      strip.show();

      delay(wait);

      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
