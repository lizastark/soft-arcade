/*
   Button Sketch
   April 2021

   Reads a button press on the Teensy LC and prints to the
   serial port.

*/

int buttonPin = 15; // store digital input pin
int buttonState; // store value of pin (i.e. state of the button)

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // activate pullup resistors
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  //Serial.println(buttonState); // test button functionality

  if (buttonState == LOW) {
    Serial.println("I'm pressed!");
  } else if (buttonState == HIGH) {
    Serial.println("OFF");
  }

}
