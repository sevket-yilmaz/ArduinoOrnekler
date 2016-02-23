#include <IRremote.h>       

int aliciPini = 11; // Kızılötesi alıcıyı bağladığımız pin
IRrecv alici(aliciPini); // IRrecv sınıfının fonksiyonlarını kullanabilmek için bağlı olan pini belirterek bir değişken oluşturuyoruz
decode_results gelenBilgi;

void setup() {
  Serial.begin(9600);
  alici.enableIRIn(); // Kızılötesi alıcıyı aktif hale getiriyoruz
}

void loop() {
  if (alici.decode(&gelenBilgi)) { // Eğer gelen bir bilgi varsa -- Yani herhangi bir tuşa basılmışsa 
    Serial.println(gelenBilgi.value, HEX); // Seri monitöre yazdırıyoruz
    alici.resume(); // Alıcının okunmasına devam etmesini söylüyoruz
  }
}
