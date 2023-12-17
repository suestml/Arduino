#include <Keypad.h>
const int trig = 9;
const int echo = 8;
const int kirmizi = 12;
const int yesil = 13;

unsigned long sure = 0;
int mesafe = 0;

const int ROWS =4;
const int COLS =3;
char keys[ROWS][COLS] ={
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'}, 
  {'*','0','#'}
};
uint8_t rowPins[ROWS] = {10,7,6,5};
uint8_t colPins[COLS] = {4,3,2}; 

Keypad keypad = Keypad(makeKeymap(keys), rowPins,colPins,ROWS,COLS);

void setup() {
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
pinMode(yesil, OUTPUT);
Serial.begin(9600);
}
void loop() {
  char key = keypad.getKey();

  digitalWrite(trig,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig,LOW);
  sure = pulseIn(echo,HIGH); 
  mesafe = (sure/2) / 29.1;

  Serial.print("Mesafe : ");
  Serial.print(mesafe);
  Serial.println(" cm");

if(key){
  Serial.println("Sayınızı giriniz: ");
  Serial.println(key);
  Serial.print("LED Durumu :");
  if(key == '1'){
    if(mesafe < 20){
      Serial.println("yeşil Aktif");
      digitalWrite(yesil,HIGH);
      delay(1000);
      digitalWrite(yesil,LOW);
      delay(1000);
    }
    else{
      Serial.println("kırmızı Aktif");
      digitalWrite(kirmizi,HIGH);
      delay(1000);
      digitalWrite(kirmizi,LOW);
      delay(1000);
    }
  }
  else if(key== '4'){
    if (mesafe >= 20 && mesafe <40){
      Serial.println("yeşil Aktif");
      digitalWrite(yesil,HIGH);
      delay(1000);
      digitalWrite(yesil,LOW);
      delay(1000);
    }
    else{
      Serial.println("kırmızı Aktif");
      digitalWrite(kirmizi,HIGH);
      delay(1000);
      digitalWrite(kirmizi,LOW);
      delay(1000);
    }
  }
  else if(key== '7'){
    if (mesafe > 40 && mesafe <=60){
      Serial.println("yeşil Aktif");
      digitalWrite(yesil,HIGH);
      delay(1000);
      digitalWrite(yesil,LOW);
      delay(1000);
    }
    else{
      Serial.println("kırmızı Aktif");
      digitalWrite(kirmizi,HIGH);
      delay(1000);
      digitalWrite(kirmizi,LOW);
      delay(1000);
    } 
  }
  else{
    digitalWrite(yesil,LOW);
    digitalWrite(kirmizi,LOW);
    Serial.println("LED Aktif DEĞİL");
    delay(500);
  }
}
else{
  digitalWrite(kirmizi,LOW);
  digitalWrite(yesil,LOW);
}
}
