#include <LiquidCrystal.h> // LCD kullanimi icin kutuphane dahil edilmelidir 

LiquidCrystal lcd(12,11,5,4,3,2); // LCDnin baglandigi pinler

void setup() {
  // Kullandigimiz LCDnin sutun ve satir sayisini belirtmeliyiz
  lcd.begin(16, 2); 
  // Ekrana yazi yazalim 
  lcd.print("MERHABA DUNYA"); 
}

void loop() { 
  // Imlecin yeri 1. satir 0. sutun olarak ayarlandi 
  lcd.setCursor(0, 1); 
  // Artik LCDye yazilanlar alt satirda gorunecektir 
  lcd.print("BU DA 2. SATIR");
}
