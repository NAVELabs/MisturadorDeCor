const int potA = 2;
const int potB = 3;
const int potC = 4;

const int ledR = 3;
const int ledG = 5;
const int ledB = 6;

void setup(){
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledB,OUTPUT);
}

void loop(){
  potsValue(potA,ledR);
  potsValue(potB,ledG);
  potsValue(potC,ledB);
}

void potsValue(int potPin, int ledPin){
  int valPot = analogRead(potPin);
  valPot = map(valPot,0,1023,0,255);
  analogWrite(ledPin,valPot);
}

