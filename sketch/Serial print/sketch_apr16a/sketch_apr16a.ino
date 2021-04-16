
int tal = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   tal = tal + 1;
   Serial.print(tal); // Utskrift av ariabeln tal
   Serial.print('\n'); 

   if (tal == 50) {
         Serial.println("Nu var det 50 igen!\n");
         tal = 0;
     }

}
