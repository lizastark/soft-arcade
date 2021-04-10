/*
   Button Sketch

   Reads a button press on the Teensy LC and prints to the
   serial port.

*/

int buttonPin = 15; // store digital input pin
int buttonState = 0; // store value of pin (i.e. state of the button)

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP); // activate pullup resistors
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);

  //Serial.println(buttonState);

  if (buttonState == LOW) {
    Serial.println("I'm pressed!");
    //Mouse.click();
    Keyboard.press(KEY_X);
   //delay(100);
    //Keyboard.release(KEY_X);
  } else if (buttonState == HIGH) {
    Serial.println("OFF");
  }

}
