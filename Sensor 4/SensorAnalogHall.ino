
int digitalPin = 0; // for ESP32 microcontroller

void setup() {
  pinMode(digitalPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogVal = analogRead(analogPin);
  int digitalVal = digitalRead(digitalPin);
  Serial.print(analogVal);
  Serial.print("\t");
  Serial.println(digitalVal);
  delay(100);
}
