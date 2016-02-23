int ledPini = 7;
int butonPini = 5;
int buttonDurumu = 0;

void setup() {
  pinMode(ledPini, OUTPUT); // 7 numaralı bacağı çıkış olarak tanımladık.
  pinMode(butonPini, INPUT); // 5 numaralı bacağı giriş olarak tanımladık.
}

void loop() {
  buttonDurumu = digitalRead(butonPini);
  if (buttonDurumu == HIGH) {     // buton basılı ise ...
    digitalWrite(ledPini, HIGH);// 7 nolu bacağa bağlı LED i yak .
  }   
  else {   // buton basılı değil ise...
    digitalWrite(ledPini, LOW); // 7 nolu bacağa bağlı LED i söndür .
  }   
  
}

