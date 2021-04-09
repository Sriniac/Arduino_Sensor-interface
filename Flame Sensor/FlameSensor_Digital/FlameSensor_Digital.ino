int Buzzer = 13; // Use buzzer for alert 
int FlamePin = 2;  // This is for input pin
int Flame = HIGH;  // HIGH when FLAME Exposed

void setup() {
  pinMode(Buzzer, OUTPUT);
  pinMode(FlamePin, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  Flame = digitalRead(FlamePin);
  if (Flame== HIGH)
  {
    Serial.println("HIGH FLAME");
    digitalWrite(Buzzer, HIGH);
  }
  else
  {
    Serial.println("No flame");
    digitalWrite(Buzzer, LOW);
  }
}

