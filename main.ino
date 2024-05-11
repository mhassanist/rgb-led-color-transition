
/*
    ARDUINO RGB LED TUTORIAL: RAINBOW COLOR
    By: TheGeekPub.com
    More Arduino Tutorials: https://www.thegeekpub.com/arduino-tutorials/

// /*
//     ARDUINO RGB LED TUTORIAL: RAINBOW COLOR
//     By: TheGeekPub.com
//     More Arduino Tutorials: https://www.thegeekpub.com/arduino-tutorials/
// */
 
// const int PIN_RED   = 25; //Red LED on pin 9
// const int PIN_GREEN = 26; //Green LED on pin 10
// const int PIN_BLUE  = 27; //Blue LED on Pin 11
 
// //variables to hold our color intensities and direction
// //and define some initial "random" values to seed it
// int red             = 254;
// int green           = 1;
// int blue            = 127;
// int red_direction   = -1;
// int green_direction = 1;
// int blue_direction  = -1;
 
// /* This function "Set Color" will set the color of the LED
//    rather than doing it over and over in the loop above. */
// void setColor(int R, int G, int B) {
//   analogWrite(PIN_RED,   R);
//   analogWrite(PIN_GREEN, G);
//   analogWrite(PIN_BLUE,  B);
// }
 
// void setup() {
//   //set all three pins to output mode
//   pinMode(PIN_RED,   OUTPUT);
//   pinMode(PIN_GREEN, OUTPUT);
//   pinMode(PIN_BLUE,  OUTPUT);
// }
 
 
// void loop() {
//   red = red + red_direction;   //changing values of LEDs
//   green = green + green_direction;
//   blue = blue + blue_direction;
 
//   //now change direction for each color if it reaches 255
//   if (red >= 255 || red <= 0)
//   {
//     red_direction = red_direction * -1;
//   }
//   if (green >= 255 || green <= 0)
//   {
//     green_direction = green_direction * -1;
//   }
//   if (blue >= 255 || blue <= 0)
//   {
//     blue_direction = blue_direction * -1;
//   }
//   setColourRgb(red, green, blue);
//   delay(50);    //a little delay is needed so you can see the change
// }

// void setColourRgb(unsigned int red, unsigned int green, unsigned int blue) {
//   analogWrite(PIN_RED, convertCathodeToAnode(red));
//   analogWrite(PIN_GREEN, convertCathodeToAnode(green));
//   analogWrite(PIN_BLUE, convertCathodeToAnode(blue));
// }


int redPin = 25;
int greenPin = 26;
int bluePin = 27;

void setup() {
  pinMode(redPin, OUTPUT);    // sets the red pin as output
  pinMode(greenPin, OUTPUT);  // sets the green pin as output
  pinMode(bluePin, OUTPUT);   // sets the blue pin as output

  setColourRgb(255, 255, 255);
}

unsigned int startColor[] = {255, 0, 0};
unsigned int endColor[] = {0, 255, 00};

unsigned int color[] = {0, 0, 0};

void loop() {
for (float t = 0; t < 1.0; t += 0.01) {
    color[0] = (int) (startColor[0] + ((endColor[0] - startColor[0]) * t));
    color[1] = (int) (startColor[1] + ((endColor[1] - startColor[1]) * t));
    color[2] = (int) (startColor[2] + ((endColor[2] - startColor[2]) * t));

    setColourRgb(color[0], color[1], color[2]);
    delay(100);
  }
  delay(1000);

}

int convertCathodeToAnode(int cathodeValue) {
    return 255 - cathodeValue;
}

void setColourRgb(unsigned int red, unsigned int green, unsigned int blue) {
  analogWrite(redPin, convertCathodeToAnode(red));
  analogWrite(greenPin, convertCathodeToAnode(green));
  analogWrite(bluePin, convertCathodeToAnode(blue));
}


// int redPin = 25;
// int greenPin = 26;
// int bluePin = 27;

// void setup() {
//   pinMode(redPin, OUTPUT);    // sets the red pin as output
//   pinMode(greenPin, OUTPUT);  // sets the green pin as output
//   pinMode(bluePin, OUTPUT);   // sets the blue pin as output

//   setColourRgb(255, 255, 255);
// }

// unsigned int startColor[] = {255, 0, 0};
// unsigned int endColor[] = {0, 255, 00};

// unsigned int color[] = {0, 0, 0};

// void loop() {
// for (float t = 0; t < 1.0; t += 0.01) {
//     color[0] = (int) (startColor[0] + ((endColor[0] - startColor[0]) * t));
//     color[1] = (int) (startColor[1] + ((endColor[1] - startColor[1]) * t));
//     color[2] = (int) (startColor[2] + ((endColor[2] - startColor[2]) * t));

//     setColourRgb(color[0], color[1], color[2]);
//     delay(100);
//   }
//   print(color)
//   delay(1000);

// }

int convertCathodeToAnode(int cathodeValue) {
    return 255 - cathodeValue;
}

// void setColourRgb(unsigned int red, unsigned int green, unsigned int blue) {
//   analogWrite(redPin, convertCathodeToAnode(red));
//   analogWrite(greenPin, convertCathodeToAnode(green));
//   analogWrite(bluePin, convertCathodeToAnode(blue));
// }
