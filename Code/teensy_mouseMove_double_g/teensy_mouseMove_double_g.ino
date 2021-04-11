/*
 * Teensy Mouse Move Test (Simple)
 * April 2021
 * 
 * Adapted from Kobakant post: https://www.kobakant.at/DIY/?p=2497
 * 
 * Two sensors move the cursor to the right and left when activated.
 */


int rightPin = A3; //variable for storing value of pin that moves RIGHT
int leftPin = A1; //variable for storing value of pin that moves LEFT
int incomingValueRight = 0; //variable for storing incoming value from RIGHT
int incomingValueLeft = 0; //variable for storing incoming value from LEFT
int speedValue = 1;

void setup() {
  pinMode(15, INPUT_PULLUP); //left - digital pin on A1
  pinMode(17, INPUT_PULLUP); //right - digital pin on A3
  //Serial.begin(9600);
  
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
