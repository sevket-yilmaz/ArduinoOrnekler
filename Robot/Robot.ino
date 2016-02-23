#include <Servo.h>

Servo servomotor;
const int trigPin = 6; // Sensorun trig pini Arduinonun 6 numarali ayagina baglandi 
const int echoPin = 7;  // Sensorun echo pini Arduinonun 7 numarali ayagina baglandi 

// Motor sürücü bağlantıları
// Motor 1
int enA = 3;//10
int solileri = 12;//3
int solgeri = 2;
// Motor 2
int enB = 11;
int sagileri = 5;
int saggeri = 4;

void setup()
{
  // Servo motor pini
  servomotor.attach(9);
  servomotor.write(0);

  Serial.begin(9600);

  /* Uzaklık sensörünün pinleri ayarlanıyor */
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin,INPUT);
 
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(solileri, OUTPUT);
  pinMode(solgeri, OUTPUT);
  pinMode(sagileri, OUTPUT);
  pinMode(saggeri, OUTPUT);
}

void loop()
{
  servomotor.write(90);
  int mesafe = mesafeOlcumu();
  if(mesafe >= 0 && mesafe <= 20){
    dur();
    delay(250);
    int sagUzaklik = servoSagaBak();
    delay(1000);
    int solUzaklik = servoSolaBak();
    delay(1000);
    
    if(sagUzaklik > solUzaklik){
      sagaDon(200);
      delay(500);
    }
    else{
      solaDon(200);
      delay(500);
    }
    
    dur();
    delay(250);
  }
  else{
    ileri(150);
    delay(500);
  }
}

void ileri(int hiz){
  /* ilk değişkenimiz sag motorun ikincisi sol motorun hızını göstermektedir.
   * motorlarımızın hızı 0-255 arasında olmalıdır.
   * Fakat bazı motorların torkunun yetersizliğiniden 60-255 arasında çalışmaktadır.
   * Eğer motorunuzdan tiz bir ses çıkıyorsa hızını arttırmanız gerekmektedir.
   */
  digitalWrite(sagileri,HIGH); /* ileri dönme sağlanıyor */
  digitalWrite(saggeri,LOW); /* ileri dönme sağlanıyor */

  digitalWrite(solileri, HIGH); /* ileri dönme sağlanıyor */
  digitalWrite(solgeri,LOW); /* ileri dönme sağlanıyor */
  
  analogWrite(enA, hiz); /* sol motorun hız verisi */
  analogWrite(enB, hiz); /* sağ motorun hız verisi */
}

void sagaDon(int hiz){
  digitalWrite(sagileri,LOW); /* geri dönme sağlanıyor */
  digitalWrite(saggeri,HIGH); /* geri dönme sağlanıyor */

  digitalWrite(solileri, HIGH); /* ileri dönme sağlanıyor */
  digitalWrite(solgeri,LOW); /* ileri dönme sağlanıyor */
  
  analogWrite(enA, hiz); /* sol motorun hız verisi */
  analogWrite(enB, hiz); /* sağ motorun hız verisi */
}

void solaDon(int hiz){
  digitalWrite(sagileri,HIGH); /* ileri dönme sağlanıyor */
  digitalWrite(saggeri,LOW); /* ileri dönme sağlanıyor */

  digitalWrite(solileri, LOW); /* geri dönme sağlanıyor */
  digitalWrite(solgeri,HIGH); /* geri dönme sağlanıyor */
  
  analogWrite(enA, hiz); /* sol motorun hız verisi */
  analogWrite(enB, hiz); /* sağ motorun hız verisi */
}


void dur()
{
  /* Tüm motorlar kilitlenerek durma sağlanıyor */
  digitalWrite(sagileri, LOW);
  digitalWrite(saggeri, LOW);
  digitalWrite(solileri, LOW);
  digitalWrite(solgeri, LOW);
  analogWrite(enA, LOW); /* sol motorun hız verisi */
  analogWrite(enB, LOW); /* sol motorun hız verisi */  
}

void geri(int hiz){
  digitalWrite(sagileri,LOW); /* geri yönde dönme sağlanıyor */
  digitalWrite(saggeri, HIGH); /* geri yönde dönme sağlanıyor */
  digitalWrite(solileri, LOW); /* geri yönde dönme sağlanıyor */
  digitalWrite(solgeri, HIGH); /* geri yönde dönme sağlanıyor */
  analogWrite(enA, hiz); /* sol motorun hız verisi */
  analogWrite(enB, hiz); /* sağ motorun hız verisi */
}

/* Uzaklık ölçümünün yapılacağı fonksiyon */
int mesafeOlcumu(){
  int mesafe=0; 
  digitalWrite(trigPin, HIGH); // önce bir ses dalgası gönderiyoruz
  delayMicroseconds(1000); // kısa bir süre bekliyoruz
  digitalWrite(trigPin, LOW); // ve ses dalgasını kesiyoruz
  int sure = pulseIn(echoPin, HIGH); // daha sonra echo pinine güç vererek ne kadar süre sonra sesin bize ulaştığını buluyoruz
  mesafe = sure/58; // bu süreyi bize lazım olan metre cinsinden mesafeye çeviriyoruz
  
  return mesafe;
}

void servoHareketi()
{
  for(int derece = 10; derece < 170; derece++){   
    servomotor.write(derece);
    delay(3);   
  }
  
  for(int derece = 170; derece > 10; derece--){ 
    servomotor.write(derece);
    delay(3);
  }
}

int servoSagaBak(){
  servomotor.write(10);
  return mesafeOlcumu();
}

int servoSolaBak(){
  servomotor.write(170);
  return mesafeOlcumu();
}

