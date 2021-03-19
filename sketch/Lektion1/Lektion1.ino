int pinLed = 8; // ordet "pinLed" är nu samma sak som att
                // skriva siffran 8
void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed,OUTPUT); // pin 8 ska användas för output
 // pinMode(8,OUTPUT); // pin 8 ska användas för output
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(pinLed,HIGH); // Stömmen på
  delay(1000); // Paus 1 sekund
  digitalWrite(pinLed,LOW); // Stömmen på
  delay(1000); // Paus 1 sekund
}
