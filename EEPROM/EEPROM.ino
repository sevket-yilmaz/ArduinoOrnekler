#include <EEPROM.h> // EEPROM fonksiyonları için kütüphane dahil edilmelidir. 
// Bu kütüphane zaten Arduino IDE içerisinde yüklü geliyor

int kayitAdresi = 10; // Verinin yazılacağı EEPROM adresi 
int kaydedilecekVeri; // EEPROMA kaydedilecek veri 

int sayac = 0;

void setup()
{
 Serial.begin(9600); 
 int kayitliDeger = EEPROM.read(kayitAdresi); // Kayıtlı değeri okumak için kullandığımız fonksiyon
 if(kayitliDeger > 0)// EEPROM'da daha önce kayıtlı veri varmı?
 {
   sayac = kayitliDeger;
 }
}

void loop()
{
  
  Serial.print("Sayac degeri : ");
  Serial.println(sayac);
  delay(1000);
  
   /* EEPROMa veri kaydediyoruz */
   kaydedilecekVeri = sayac; 
   EEPROM.write(kayitAdresi, kaydedilecekVeri); // EEPROMun 10 adresine 'kaydedilecekVeri' değişkeninin değeri yazdırıldı
   sayac = sayac + 10; // Her seferinde sayacı 10 artırıyoruz
 
}
