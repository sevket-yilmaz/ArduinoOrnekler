const int sensorPini= 0; 
int seviye = 0;

void setup() {
  Serial.begin(9600); 
}

void loop() {
  seviye= analogRead(sensorPini); // Seviyeyi okuyoruz
  Serial.println("Seviye = "+seviye); // Seri monitöre yazdırıyoruz
  delay(100);
}
