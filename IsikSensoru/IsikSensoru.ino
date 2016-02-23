int LDR_Pin = A0; //analog pin 0

void setup(){
  Serial.begin(9600);
}

void loop(){
  int LDR_degeri = analogRead(LDR_Pin); // Analog pinden veri okuyoruz
  Serial.println(LDR_degeri); // Seri monitöre yazdırıyoruz
  delay(250); // Serial monitör çok hızlı akmasın diye bir süre bekletiyoruz
}
