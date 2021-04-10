/*
 * TEENSY HID FOR ALT CONTRL DEEP DIVE
 * FEB 14, 2021
 * 
 * Adapted from Kobakant post: https://www.kobakant.at/DIY/?p=2497
 * 
 * Two sensors control left and right movement.
 */


// The following code is an example of mapping analog input
// from analog pin 1 on the Teensy to the X value of the mouse cursor.
// It sets a trigger threshold, bellow which the function is called
// When the move function is called X steadily increases by the value of speed.
// You can not accelerate the speed of the mouse in this example.

int rightPin = A3; //variable for storing value of pin that moves RIGHT
int leftPin = A1; //variable for storing value of pin that moves LEFT
int incomingValueRight = 0; //variable for storing incoming value from RIGHT
int incomingValueLeft = 0; //variable for storing incoming value from LEFT
int speedValue = 1;

void setup() {
  pinMode(15, INPUT_PULLUP); //left - digital pin on A1
  pinMode(17, INPUT_PULLUP); //right - digital pin on A3
  //Serial.begin(9600);
  //Mouse.screenSize(400, 400);
}

void loop() {
  incomingValueRight = analogRead(rightPin);
  incomingValueLeft = analogRead(leftPin);
  /*
    Serial.print("right = ");
    Serial.print(incomingValueRight);
    Serial.print("\t");
    Serial.print("left = ");
    Serial.println(incomingValueLeft);
  */

  //RIGHT
  if (incomingValueRight < 120)
  { //setting threshold
    Mouse.move(speedValue, 0);
    //scaling values
  } else {
    Mouse.move(0, 0);
  }

  //LEFT
  if (incomingValueLeft > 960)
  { //setting threshold
    Mouse.move(-speedValue,0);
    //scaling values
  } else {
    Mouse.move(0, 0);
  }


}
