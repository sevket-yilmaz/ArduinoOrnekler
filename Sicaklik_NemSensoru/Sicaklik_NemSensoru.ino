#include <dht.h> // Sıcaklık ve Nem sensörü için gerekli kütüphane
#define sensorPini A0 // Sensörün bağlı olduğu analog pin

dht DHT;

void setup(){
  Serial.begin(9600); 
}
 
void loop(){
  // sensörden değer okumasını söylüyoruz
  DHT.read11(sensorPini);
      
  Serial.print("Nem = ");
  Serial.print(DHT.humidity); // nem değeri
  Serial.print("%  ");
  Serial.print("Sicaklik = ");
  Serial.print(DHT.temperature); // sıcaklık değeri 
  Serial.println(" C");
  delay(3000);
  
}
