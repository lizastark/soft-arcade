/* 
 *  Teensy Keyboard Test (Simple)
 *  April 2021
 *  
 *  Adapted from the Buttons to USB Keyboard Example 
 *  in File > Examples > 
 *  You must select Keyboard from the "Tools > USB Type" menu 
 *  This example code is in the public domain.
*/

#include <Bounce.h>

// Create Bounce objects for each button.  The Bounce object
// automatically deals with contact chatter or "bounce", and
// it makes detecting changes very simple.

Bounce buttonX = Bounce(15, 50);

void setup() {
  pinMode(15, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {

  buttonX.update(); // Update all the buttons. Be sure to avoid long delays

  if (buttonX.fallingEdge()) {
    Keyboard.press(KEY_X);
    Keyboard.release(KEY_X);
    Serial.println("I'M TYPING!");
  } else {
    Serial.println("Taking a typing break");
  }

}
