char veri;

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
if (Serial.available()>0){
    
  veri=Serial.read();
  
  if(veri=='1'){
  digitalWrite(13,1);
  Serial.println("LED Yakildi.");
  }
  
  if (veri=='0'){
    digitalWrite(13,0);
    Serial.println("LED Sonduruldu." );
  }
}
  delay(100);
}
