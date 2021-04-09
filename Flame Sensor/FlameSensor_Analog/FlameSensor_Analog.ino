const int analogPin = A0;    // Flame Sensor (A0) to Arduino analog input pin A0
const int BuzzerPin = 13;       // Buzzer output pin
const int threshold = 400;   // Flame level threshold (You can vary the value depends on your need)

void setup() {
  
  pinMode(BuzzerPin, OUTPUT);
  // initialize serial communications:
  Serial.begin(9600);
}

void loop() {
  // read the value of the Flame Sensor:
  int analogValue = analogRead(analogPin);
   Serial.println(analogValue); //serial print the FLAME sensor value
  
  if (analogValue > threshold) {
    digitalWrite(BuzzerPin, HIGH);
    Serial.print("High FLAME");
  } 
  else if (analogValue = threshold){
    Serial.print("Low FLAME");
    digitalWrite(BuzzerPin, HIGH);
    delay(400);
    digitalWrite(BuzzerPin, LOW);
  }
  else {
    digitalWrite(BuzzerPin, LOW);
    Serial.print("No flame");
  }

  delay(1);       
}
