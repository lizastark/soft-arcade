/*
 Reading Sensor Values
 
 This sketch reads the data coming in from the sensor and prints it to the serial
 monitor. This is extremely helpful to debug or find the range of values you 
 want to use.
 
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
  Serial.println(sensorValue);  

  /*
  if(sensorValue < 700){
    //Mouse.move(1,0);
  } else {
    //Mouse.move(0,0);
  }
  */
}
