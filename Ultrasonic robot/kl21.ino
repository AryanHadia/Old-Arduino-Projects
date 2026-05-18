int x;//زمان
int z;//فاصله
int echo=1;
int trig=2;
int m1p1=3;
int m1p2=5;
int m2p1=6;
int m2p2=9;

void setup() {
pinMode(echo,INPUT);
pinMode(trig,OUTPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(trig,1);
delayMicroseconds(10);
digitalWrite(trig,0);
z=pulseIn(echo,1);
x=z*(0,017);
Serial.println(x);

if(x>10){
  analogWrite(m1p1,250);
  analogWrite(m1p2,0);
  analogWrite(m2p1,250);
  analogWrite(m2p2,0);
}
if(x<10){
  analogWrite(m1p1,250);
  analogWrite(m1p2,0);
  analogWrite(m2p1,0);
  analogWrite(m2p2,0);
}
}
