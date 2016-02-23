void setup() {
  pinMode(5,OUTPUT); // Kırmızı
  pinMode(6,OUTPUT); // Yeşil
  pinMode(7,OUTPUT); // Mavi
}

void loop() {
  // Kırmızı ledi yakıp diğerlerini söndürüyoruz
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(1000);
  // Yeşi ledi yakıp diğerlerini söndürüyoruz
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  delay(1000);
  // Mavi ledi yakıp diğerlerini söndürüyoruz
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(1000);
}
