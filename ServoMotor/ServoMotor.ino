 #include <Servo.h>
 
int servoPin = 9; // servonun bağlı olduğu pin

Servo servo; // servo kütüphanesinden bir değişken oluşturuyoruz
int aciDegeri = 0;   // açı değerini belirtir

void setup()
{
  // servonun bağlı olduğu pini belirterek
  // tanımlama yapmamız gerekiyor
  servo.attach(servoPin); 
}

void loop()
{
  for(aciDegeri = 5; aciDegeri < 180; aciDegeri++)   // 0-180 derece tarama
  {
    servo.write(aciDegeri);   
    delay(3);     
  }
  
  for(aciDegeri = 180; aciDegeri > 5; aciDegeri--)    // 180-0  derece geri tarama
  {                           
    servo.write(aciDegeri);       
    delay(3);   
  }
} 
