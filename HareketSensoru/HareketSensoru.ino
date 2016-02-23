int pirPin = 2; // PIR pini
int ledPin = 13;   // LED pini
int deger = 0;             
 
void setup() {
  pinMode(pirPin, INPUT);     // PIR Pin'i giriş yapılıyor
  pinMode(ledPin, OUTPUT);      // LED Pin'i çıkış yapılıyor
  Serial.begin(9600);           // Serial Porttan veri göndermek için baundrate ayarlanıyor.
}
 
void loop(){
  deger = digitalRead(pirPin);  // Dijital pin okunuyor
  Serial.println(deger);        // Okunan değer seri port ekranına yazılıyor
  if (deger == HIGH) {          // Eğer okunan değer 1 ise LED yakılıyor.     
    digitalWrite(ledPin, HIGH); 
  }
  else{                         // Eğer okunan değer 0 ise LED söndürülüyor.
    digitalWrite(ledPin,LOW);   
  }
}
