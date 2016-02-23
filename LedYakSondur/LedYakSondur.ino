void setup() {
  pinMode(7,OUTPUT); // 7. pini çıkış olarak tanımlıyoruz
}

void loop() {
  digitalWrite(7,HIGH); // Ledi yakıyoruz
  delay(1000); // bir saniye bekliyoruz
  digitalWrite(7,LOW); // Ledi söndürüyoruz
  delay(1000); // bir saniye bekliyoruz
}
