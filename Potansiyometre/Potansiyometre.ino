const int PotansiyometrePini = A0; // Potansiyometrenin bağlı olduğu pin

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Deger : ");
  // potansiyometrenin değerini okuyup seri monitöre yazdırıyoruz
  Serial.println(analogRead(PotansiyometrePini)); 
  delay(250);
}
