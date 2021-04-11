/*
 * Teensy mouse click test 
 * April 2021
 * 
 * Turns the teensy into an HID and allows you to click
 * the mouse with an external interface like a fabric button.
 * 
 *
 */

int buttonPin = 15; // store digital input pin
int buttonState; // store value of pin (i.e. state of the button)

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP); // activate pullup resistors
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    Serial.println("I'm pressed!");
    Mouse.click();
  } else if (buttonState == HIGH) {
    Serial.println("OFF");
  }

}
