 int sensorPin = A0;
 int buzzerPin = 8;
 int sensor;

 void setup() {
 Serial.begin(9600);
 pinMode(buzzerPin, OUTPUT);
 pinMode(sensorPin, INPUT);
 }

void loop() {
 sensor = analogRead(sensorPin);
// Serial.println(sensor);
delay(500);
 if (sensor > 800) {
 tone(buzzerPin, 440);
 //delay(1000);
  Serial.print("Mer ");
   Serial.println(sensor);
 }
 else {
 tone(buzzerPin, 220);
 //delay(1000);
 Serial.print("Mindre ");
 Serial.println(sensor);

 }

}
