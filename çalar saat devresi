int buzzerPin =6;
int isik = 0;

void setup() {
 pinMode(isik, INPUT);
 pinMode(buzzerPin,OUTPUT);
}

void loop() {
  isik = analogRead(A0);
  Serial.println(isik);
  int i =0 ;
  if(isik > 400)
  {
    while(i<5)
    {
      isik = analogRead(A0);
      if(isik > 400)
      {
        digitalWrite(buzzerPin, HIGH);
        delay(1000);
        digitalWrite(buzzerPin, LOW);
        delay(1000);
        i=i+2;
      }
      else {
        digitalWrite(buzzerPin, LOW);
        i=0;
      }
    }
    while(i >=5)
    {
      isik = analogRead(A0);
      if(isik > 400)
      {
        digitalWrite(buzzerPin, HIGH);
        delay(100);
        digitalWrite(buzzerPin, LOW);
        delay(100);
      }
      else {
        digitalWrite(buzzerPin, LOW);
        i=0;
      }
    }
  }
  else{
    digitalWrite(buzzerPin, LOW);
  }
}
