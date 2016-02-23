#include <virtuabotixRTC.h> // Saat modülünü kullanmak için gerekli kütüphane
 
// Kütüphaneye portlarınımızı belirterek
// bir değişken oluşturuyoruz
//CLK -> 5, DATA -> 6, RST -> 7
virtuabotixRTC saat(5, 6, 7);
 
void setup() { 
  Serial.begin(9600);
  // Başlamasını istediğimiz tarih ve saati belirtiyoruz
  // saniye, dakika, saat, haftanın kaçıncı günü, ayın kaçı, ay, yıl
  saat.setDS1302Time(00, 57, 16, 0, 30, 11, 2015);
}
 
 
void loop() { 
  // Güncel saati oku
  saat.updateTime(); 
   
  // Yazdırıyoruz 
  Serial.print("Tarih ve Saat: ");
  Serial.print(saat.dayofmonth); // gün
  Serial.print("/");
  Serial.print(saat.month); // ay
  Serial.print("/");
  Serial.print(saat.year); // yıl
  Serial.print(" ");
  Serial.print(saat.hours); // saat
  Serial.print(":");
  Serial.print(saat.minutes); // dakika
  Serial.print(":");
  Serial.println(saat.seconds); // saniye
   
  // 5 saniye bekliyoruz
  delay(5000); 
}

