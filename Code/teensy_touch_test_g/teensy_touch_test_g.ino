/*
 Teensy touch 
 
 This sketch uses the touch functionality connected 
 to some pins on the Teensy LC.
 
 */

int touchPin = 15;
int touchValue;

void setup() {
  Serial.begin(9600);

}

void loop() {
  touchValue = touchRead(15);
  Serial.println(touchValue);
}
