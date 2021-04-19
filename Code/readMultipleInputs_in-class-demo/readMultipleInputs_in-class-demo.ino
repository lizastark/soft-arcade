/*
  Reading Multiple Inputs - in class demo

*/

int sensorPin = A6;    // select the input pin for the sensor
int sensorValue;  // variable to store the value coming from the sensor

int vibeMotor = 12;

int buttonPin = 16;
int buttonState;


void setup() {
  pinMode(sensorPin, INPUT_PULLUP);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(vibeMotor, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor and button:
  sensorValue = analogRead(sensorPin);
  buttonState = digitalRead(buttonPin);

  //Print the value to the Serial monitor
  Serial.print("Sensor value = ");
  Serial.print(sensorValue);
  Serial.print("     Button value = ");
  Serial.println(buttonState);

  if (sensorValue < 200) { //If sensor is stretched...
    digitalWrite(vibeMotor, HIGH);
    //Move the mouse right
    Mouse.move(1, 0);
  } else if (buttonState == LOW) { //If button is pressed...
    Mouse.move(0, 1);
    //Move the mouse down
  }
  else { //If nothing is happening, don't do anything
    digitalWrite(vibeMotor, LOW);
    Mouse.move(0, 0);
  }

}
