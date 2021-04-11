/*
 * Teensy Mouse Move Test (Simple)
 * April 2021
 * 
 * Adapted from Kobakant post: https://www.kobakant.at/DIY/?p=2497
 * 
 * One sensor moves the cursor to the right when activated.
 */


int sensorPin = A1;    // select the input pin for the sensor
int sensorValue;  // variable to store the value coming from the sensor


void setup() {
  pinMode(sensorPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin); 
  
  //Print the value to the Serial monitor   
  //Serial.println(sensorValue);  
  
  if(sensorValue < 700){
    Mouse.move(1,0);
  } else {
    Mouse.move(0,0);
  }
 
}
