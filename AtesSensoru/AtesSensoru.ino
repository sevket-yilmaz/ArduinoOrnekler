int Ates_Sensoru = A0; // Sensörün bağlı olduğu analog pin

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int SensorDegeri = analogRead(Ates_Sensoru); // Sensörün değerini okuyoruz
  Serial.println(SensorDegeri); // Seri Monitöre yazdırıyoruz
  delay(250); // 250 milisaniye bekliyoruz
}
