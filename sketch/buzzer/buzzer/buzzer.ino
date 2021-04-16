int tonePin = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(tonePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(tonePin, 1760, 300);
  delay(500);
  noTone(tonePin);
  delay(500);
}
