int veriPini = 0;
int deger;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  deger = analogRead(veriPini);
  float centigradeDegeri = (deger/1024.0)*5000/10;
  
  Serial.print("SICAKLIK = ");
  Serial.print(centigradeDegeri);
  Serial.print("*C");
  Serial.println();
  delay(1000);

}

