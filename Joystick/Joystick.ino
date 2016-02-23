int SW_pin = 2; // Buton pini
int X_pin = A1; // X pozisyonunu okuyacağımız pin
int Y_pin = A0; // Y pozisyonunu okuyacağımız pin
 
void setup() {
  pinMode(SW_pin, INPUT); // Butonun bağlı olduğun pini giriş olarak ayarlıyoruz
  digitalWrite(SW_pin, HIGH); // Butona güç veriyoruz
  Serial.begin(115200); // Joystick için baud değeri 115200
}

void loop() {
  Serial.print("Buton Durumu:  ");
  Serial.println(digitalRead(SW_pin));
  Serial.print("X: ");
  Serial.println(analogRead(X_pin)); // X pozisyonunun değeri
  Serial.print("Y: ");
  Serial.println(analogRead(Y_pin)); // Y pozisyonunun değeri
  delay(500);
}
