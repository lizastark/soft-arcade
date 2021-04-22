/*
  Teensy touch

  This sketch uses the touch functionality connected
  to some pins on the Teensy LC.

*/

int touchPin = 15;
int touchPin2 = 23;
int touchValue;
int touchValue2;

void setup() {
  Serial.begin(9600);

}

void loop() {
  touchValue = touchRead(touchPin);
  touchValue2 = touchRead(touchPin2);
  
  //Serial.println(touchValue);
  Serial.println(touchValue2);
  
  if (touchValue > 2000) {
    Mouse.move(0,1);
  }

  if (touchValue2 > 2000) {
    Mouse.click();
  }
}
