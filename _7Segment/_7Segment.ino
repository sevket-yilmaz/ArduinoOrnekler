
int segA = 5;  // >>  11
int segB = 13; // >>  7
int segC = 10; // >>  4
int segD = 8;  // >>  2
int segE = 7;  // >>  1
int segF = 4;  // >>  10
int segG = 11; // >>  5
int segPt = 9; // >>  3
//------------//

int d1 = 6;   // >> 12
int d2 = 3;   // >> 9
int d3 = 2;   // >> 8
int d4 = 12;  // >> 6
//------------//

int beklemeZamani = 5000; 

//=============================================//
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}


void loop() {
  digitalWrite(d1, LOW);
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segPt, LOW);
  //yazdir(8,8,8,8);
}


//=============================================//
// bu fonksiyon gönderilen a,b,c,d rakamlarını sırasıyla yazdırır
void yazdir(int a,int b,int c,int d){
    basamakSecRakamYazdir(1,a);
    basamakSecRakamYazdir(2,b);
    basamakSecRakamYazdir(3,c);
    basamakSecRakamYazdir(4,d);
}


// bu fonksiyon gelen basamak ve rakam değerlerini kontrol ederek 
// rakamı ilgili basamağa yazdırır
void basamakSecRakamYazdir(int basamak,int rakam){
  switch (basamak) { 
    case 0: digitalWrite(d1, LOW); // hepsini sondur
            digitalWrite(d2, LOW);
            digitalWrite(d3, LOW);
            digitalWrite(d4, LOW);
            break;
    case 1: digitalWrite(d1, LOW);  // birinci hane
            digitalWrite(d2, HIGH);
            digitalWrite(d3, HIGH);
            digitalWrite(d4, HIGH);
            break;
    case 2: digitalWrite(d1, HIGH); // ikinci hane
            digitalWrite(d2, LOW);
            digitalWrite(d3, HIGH);
            digitalWrite(d4, HIGH);
            break;
    case 3: digitalWrite(d1, HIGH); // üçüncü hane
            digitalWrite(d2, HIGH);
            digitalWrite(d3, LOW);
            digitalWrite(d4, HIGH);
            break;
    case 4: digitalWrite(d1, HIGH); // dördüncü hane
            digitalWrite(d2, HIGH);
            digitalWrite(d3, HIGH);
            digitalWrite(d4, LOW);
            break;
  }

  switch (rakam) { // yazilacak rakamın fonksiyonunu seçiyoruz
    case 0: sifir();
            break;
    case 1: bir();
            break;
    case 2: iki();
            break;
    case 3: uc();
            break;
    case 4: dort();
            break;
    case 5: bes();
            break;
    case 6: alti();
            break;
    case 7: yedi();
            break;
    case 8: sekiz();
            break;
    case 9: dokuz();
            break;
    case 10: nokta(); // rakam değeri 10 gönderilmişse nokta çiziyoruz
            break;
    case 11: tumunuKapat(); // rakam değeri 11 gönderilmişse tum ledleri söndürerek hiç birşey yazmamış oluyoruz
            break;
  }

  delayMicroseconds(beklemeZamani); 

}

//=============================================//
void sifir(){
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, LOW);
  digitalWrite(segPt, LOW);
}
//=============================================//
void bir(){
  digitalWrite(segA, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segPt, LOW);
}
//=============================================//
void iki(){
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
  digitalWrite(segPt, LOW);
}
//=============================================//
void uc(){
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
  digitalWrite(segPt, LOW);
}
//=============================================//
void dort(){
  digitalWrite(segA, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segPt, LOW);
}
//=============================================//
void bes(){
  digitalWrite(segA, HIGH);
  digitalWrite(segB, LOW);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segPt, LOW);
}
//=============================================//
void alti(){
  digitalWrite(segA, HIGH);
  digitalWrite(segB, LOW);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segPt, LOW);
}
//=============================================//
void yedi(){
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segPt, LOW);
}
//=============================================//
void sekiz(){
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segPt, LOW);
}
//=============================================//
void dokuz(){
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segPt, LOW);
}
//=============================================//
void nokta(){
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segPt, HIGH);
}
//=============================================//
void tumunuKapat(){
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segPt, LOW);
}
