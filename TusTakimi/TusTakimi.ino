#include <Keypad.h>

// Tuşlara basıldığında bize gelmesini istediğimiz
// değerleri tanımladığımız dizi
char degerler[4][4]={
 {'1','2','3','A'},
 {'4','5','6','B'},
 {'7','8','9','C'},
 {'*','0','#','D'}};

byte satirPinleri[4]={5,6,7,8};
byte sutunPinleri[4]={9,10,11,12};

// Keypad kütüphanesine gerekli bilgileri göndererek bir değişken oluşturuyoruz
// tuş değerleri,satır,sutun,satır ve sutun sayısı
Keypad keypad = Keypad(makeKeymap(degerler),satirPinleri,sutunPinleri,4,4);
 
void setup()
{
  Serial.begin(9600);
}

void loop()
{
   char basilanTus = keypad.getKey(); // basılan tuşun değerini okuyoruz
   if(basilanTus) // eğer herhangi bir tuşa basılmışsa
   {
     Serial.println(basilanTus); 
   }
}
