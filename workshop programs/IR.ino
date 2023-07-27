int irSensorPin = 2; 

void setup() {
  pinMode(irSensorPin, INPUT); 
  Serial.begin(9600); 
}

void loop() {
  int sensorValue = digitalRead(irSensorPin); // Read the digital value from the sensor

  // Print the sensor value to the serial monitor for debugging
  Serial.print("IR Sensor Value: ");
  Serial.println(sensorValue);

  
  if (sensorValue == 1) {
    // Object detected
    Serial.println("Object detected!");
    
  }

  delay(100); 
}
