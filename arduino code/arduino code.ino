int rLED = 4;
int bLED = 3;

int nBtn1 = 11;
int pBtn1 = 12;
int nBtn2 = 13;
int pBtn2 = 0;

int nMotor1 = 6;
int nMotor2 = 9;
int nMotor3 = 8;
int nMotor4 = 2;

int pMotor1 = 5;
int pMotor2 = 10;
int pMotor3 = 7;
int pMotor4 = 1;

int nBtnState1;
int pBtnState1;
int nBtnState2;
int pBtnState2;

int nCrctState1;
int pCrctState1;
int nCrctState2;
int pCrctState2;

void setup(){
pinMode(nBtn1,INPUT);
pinMode(pBtn1,INPUT);
pinMode(nBtn2,INPUT);
pinMode(pBtn2,INPUT);
}

void loop(){
nBtnState1 = digitalRead(nBtn1);
pBtnState1 = digitalRead(pBtn1);
nBtnState2 = digitalRead(nBtn2);
pBtnState2 = digitalRead(pBtn2);

//backward
if(nBtnState1 == LOW){
if(nCrctState1 == LOW){

nCrctState1 = HIGH;

digitalWrite(nMotor1,HIGH);
digitalWrite(nMotor2,HIGH);
digitalWrite(nMotor3,LOW);
digitalWrite(nMotor4,LOW);
digitalWrite(pMotor1,LOW);
digitalWrite(pMotor2,LOW);
digitalWrite(pMotor3,LOW);
digitalWrite(pMotor4,LOW);
}else{
nCrctState1 = LOW;
}
}

//forward
if(pBtnState1 == LOW){
if(pCrctState1 == LOW){

pCrctState1 = HIGH;
digitalWrite(nMotor1,LOW);
digitalWrite(nMotor2,LOW);
digitalWrite(nMotor3,LOW);
digitalWrite(nMotor4,LOW);
digitalWrite(pMotor1,HIGH);
digitalWrite(pMotor2,HIGH);
digitalWrite(pMotor3,LOW);
digitalWrite(pMotor4,LOW);
}else{
pCrctState1 = LOW;
}
}

//left
if(nBtnState2 == LOW){
if(nCrctState2 == LOW){

nCrctState2 = HIGH;
digitalWrite(nMotor1,HIGH);
digitalWrite(nMotor2,LOW);
digitalWrite(nMotor3,LOW);
digitalWrite(nMotor4,LOW);
digitalWrite(pMotor1,LOW);
digitalWrite(pMotor2,HIGH);
digitalWrite(pMotor3,HIGH);
digitalWrite(pMotor4,HIGH);

digitalWrite(bLED,LOW);
digitalWrite(rLED,HIGH);

}else{
nCrctState2 = LOW;
}
}

//right
if(pBtnState2 == LOW){
if(pCrctState2 == LOW){

pCrctState2 = HIGH;
digitalWrite(nMotor1,LOW);
digitalWrite(nMotor2,HIGH);
digitalWrite(nMotor3,LOW);
digitalWrite(nMotor4,LOW);
digitalWrite(pMotor1,HIGH);
digitalWrite(pMotor2,LOW);
digitalWrite(pMotor3,HIGH);
digitalWrite(pMotor4,HIGH);

digitalWrite(bLED,HIGH);
digitalWrite(rLED,LOW);

}else{
pCrctState2 = LOW;
}
}
}