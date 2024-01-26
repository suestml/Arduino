int potdeger =0;
const int yesil =12 ;
const int yesil1 =11 ;
const int sari = 10;
const int sari1 = 9;
const int kirmizi = 8;
const int kirmizi1 = 6;
int buzzerPin =13;

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(yesil, OUTPUT);
  pinMode(yesil1, OUTPUT);
  pinMode(kirmizi, OUTPUT);
  pinMode(kirmizi1, OUTPUT);
  pinMode(sari, OUTPUT);
  pinMode(sari1, OUTPUT);
}
void loop() {
potdeger = analogRead(A0);
Serial.println(potdeger);
if(potdeger>= 0 && potdeger< 170){ 
  Serial.println("1 yeşil Aktif");
  tone(buzzerPin,500); //1000 milisaniye , 500 frekans
  digitalWrite(yesil,HIGH);
  delay(1000);
  noTone(buzzerPin);
  delay(1000);
  digitalWrite(yesil,LOW);
}
else if(potdeger>= 170 && potdeger< 340){
  Serial.println("2 yeşil Aktif");
  tone(buzzerPin,500); //500 milisaniye, 500 frekans
  digitalWrite(yesil,HIGH);
  digitalWrite(yesil1,HIGH);
  delay(500);
  noTone(buzzerPin);
  delay(500);
  digitalWrite(yesil,LOW); 
  digitalWrite(yesil1,LOW);
}
else if(potdeger>= 340 && potdeger< 512){
  Serial.println("1 sarı Aktif");
  tone(buzzerPin, 1000); //1000 milisaniye, 1000 frekans
  digitalWrite(sari,HIGH);
  delay(1000);
  noTone(buzzerPin);
  delay(1000);
  digitalWrite(sari,LOW);
}
else if(potdeger>= 512 && potdeger< 680){
  Serial.println("2 sarı Aktif");
  tone(buzzerPin, 1000); //500 milisaniye, 1000 frekans
  digitalWrite(sari,HIGH);
  digitalWrite(sari1,HIGH);
  delay(500);
  noTone(buzzerPin);
  delay(500);
  digitalWrite(sari,LOW);
  digitalWrite(sari1,LOW);
}
else if(potdeger>= 680 && potdeger< 850){
  Serial.println("1 kırmızı Aktif");
  tone(buzzerPin, 2000); //1000 milisaniye , 2000 frekans
  digitalWrite(kirmizi,HIGH);
  delay(1000);
  noTone(buzzerPin);
  delay(1000);
  digitalWrite(kirmizi,LOW);
}
else if(potdeger>= 850 && potdeger< 1024){ 
  Serial.println("2 kırmızı Aktif");
  tone(buzzerPin, 2000); // 500 milisaniye, 2000 frekans
  digitalWrite(kirmizi,HIGH);
  digitalWrite(kirmizi1,HIGH);
  delay(500);
  noTone(buzzerPin);
  delay(500);
  digitalWrite(kirmizi,LOW);
  digitalWrite(kirmizi1,LOW);
}
}
