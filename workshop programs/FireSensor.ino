int flameSensorPin = 2;

void setup() {
  pinMode(flameSensorPin, INPUT); 
  Serial.begin(9600); 
}

void loop() {
  int flameValue = digitalRead(flameSensorPin); // Read the digital value from the sensor

  // Print the sensor value to the serial monitor 
  Serial.print("Flame Value: ");
  Serial.println(flameValue);

  
  if (flameValue == 1) {
    // Fire detected
    Serial.println("Fire detected!");
   
  }

  delay(1000); 
}
