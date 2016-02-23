int DO = 2; //D0 pini
int DA = A0; // A0 pini
int sesDegeri = 0;
 
void setup(){
  Serial.begin(9600);
  pinMode(DO, INPUT);
}
 
void loop() {
  sesDegeri = analogRead(DA);  //Analog değeri okuyoruz.
  Serial.print("Analog: ");
  Serial.print(sesDegeri);  //Analog değeri yazdırıyoruz.
  Serial.print("  ");
  Serial.print("Digital: ");
  Serial.println(digitalRead(DO));  //Dijital değeri yazdırıyoruz
 delay(500);
 
}
