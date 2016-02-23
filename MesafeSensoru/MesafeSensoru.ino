int trigPin = 12;
int echoPin = 11;

int sure, mesafe;
 
void setup() {
  Serial.begin (9600);
  // trig ve echo pinlerinin biri ses yollamak 
  // diğeri de çarpıp gelen sesi algılamak için kullanılır
  // bu yüzden birini çıkış diğerini giriş olarak tanımlıyoruz
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 
void loop() {
  mesafe=0; // her seferinde mesafe değerini 0 a çekiyoruz
  digitalWrite(trigPin, HIGH); // önce bir ses dalgası gönderiyoruz
  delayMicroseconds(1000); // kısa bir süre bekliyoruz
  digitalWrite(trigPin, LOW); // ve ses dalgasını kesiyoruz
  sure = pulseIn(echoPin, HIGH); // daha sonra echo pinine güç vererek ne kadar süre sonra sesin bize ulaştığını buluyoruz
  mesafe = sure/58; // bu süreyi bize lazım olan metre cinsinden mesafeye çeviriyoruz
  // 58 i standart bir sayı olarak kabul edelim, metre hesabı elde etmek için 58 e bölüyoruz
  
  if(mesafe<7 && mesafe>0) // eğer 0 ile 7 cm aralığında ise
  {
    Serial.println("Carpacak!!!");
  }
  else
  {
    Serial.println("-----------");
  }
}
