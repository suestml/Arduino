#define SensorSol 10
#define SensorOrta 11
#define SensorSag 12
#define MotorR1 6
#define MotorR2 7 
#define MotorRE 9
#define MotorL1 5
#define MotorL2 4
#define MotorLE 3

void setup() {
  pinMode(SensorSol, INPUT);
  pinMode(SensorOrta, INPUT);
  pinMode(SensorSag, INPUT);
  pinMode(MotorR1, OUTPUT); 
  pinMode(MotorR2, OUTPUT);
  pinMode(MotorL1, OUTPUT);
  pinMode(MotorL2, OUTPUT);
}
void loop() {
  if (digitalRead(SensorSol) == 0 && digitalRead(SensorOrta) == 1 && digitalRead(SensorSag) == 0) { 
    ileri();
  }
  if (digitalRead(SensorSol) == 0 && digitalRead(SensorOrta) == 0 && digitalRead(SensorSag) == 1) { 
    sag();
  }
  if (digitalRead(SensorSol) == 1 && digitalRead(SensorOrta) == 0 && digitalRead(SensorSag) == 0) { 
    sol();
  }
}
void ileri() { 
  digitalWrite(MotorR1, HIGH); 
  digitalWrite(MotorR2, LOW); 
analogWrite(MotorRE, 100); 


  digitalWrite(MotorL1, HIGH); 
  digitalWrite(MotorL2, LOW); 
  analogWrite(MotorLE, 100); 
}
void sag() { 
  digitalWrite(MotorR1, HIGH); 
  digitalWrite(MotorR2, LOW); 
  analogWrite(MotorRE, 0); 


  digitalWrite(MotorL1, HIGH); 
  digitalWrite(MotorL2, LOW); 
  analogWrite(MotorLE, 100); 
}
void sol() { 
  digitalWrite(MotorR1, HIGH); 
  digitalWrite(MotorR2, LOW); 
  analogWrite(MotorRE, 100); 


  digitalWrite(MotorL1, HIGH); 
  digitalWrite(MotorL2, LOW); 
  analogWrite(MotorLE, 0);
}
