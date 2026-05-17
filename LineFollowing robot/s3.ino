int s1;
int s2;
int s3;
int s4;
int m1p1=3;
int m1p2=5;
int m2p1=6;
int m2p2=9;
void setup() {
Serial.begin(9600);
}

void loop() {
s1=analogRead(A0);
s2=analogRead(A1);
s3=analogRead(A2);
s4=analogRead(A3);
if(s1<300){
if(s2<300){
if(s3<300){
if(s4<300){  
    analogWrite(m2p1,250);
    analogWrite(m2p2,0);
    analogWrite(m1p1,225);
    analogWrite(m1p2,0);
}
}
}
}
if (s1<300){
if (s2>300){
if (s3<300){
if (s4<300){
    analogWrite(m1p1,250);
    analogWrite(m1p2,0);
    analogWrite(m2p1,0);
    analogWrite(m2p2,0);
    delay(50);
}
}
}
}
if (s1<300){
if (s2<300){
if (s3>300){
if (s4<300){
    analogWrite(m1p1,0);
    analogWrite(m1p2,0);
    analogWrite(m2p1,250);
    analogWrite(m2p2,0);
    delay(50);
}
}
}
}
if (s1>300){
if (s2<300){
if (s3<300){
if (s4<300){
    analogWrite(m1p1,250);
    analogWrite(m1p2,0);
    analogWrite(m2p1,0);
    analogWrite(m2p2,250);
    delay(270);
}
}
}
}
if (s1<300){
if (s2<300){
if (s3<300){
if (s4>300){
    analogWrite(m1p1,0);
    analogWrite(m1p2,220);
    analogWrite(m2p1,220);
    analogWrite(m2p2,0);
    delay(270);
}
}
}
}
if (s1<300){
if (s2>300){
if (s3<300){
if (s4>300){
    analogWrite(m1p1,0);
    analogWrite(m1p2,250);
    analogWrite(m2p1,0);
    analogWrite(m2p2,250);
    delay(100);
    analogWrite(m1p1,220);
    analogWrite(m1p2,0);
    analogWrite(m2p1,0);
    analogWrite(m2p2,220);
    delay(1200);
}
}
}
}
if (s1>300){
if (s2<300){
if (s3>300){
if (s4<300){
    analogWrite(m1p1,0);
    analogWrite(m1p2,250);
    analogWrite(m2p1,0);
    analogWrite(m2p2,250);
    delay(100);
    analogWrite(m1p1,220);
    analogWrite(m1p2,0);
    analogWrite(m2p1,0);
    analogWrite(m2p2,220);
    delay(1200);
}
}
}
}
if (s1<300){
if (s2>300){
if (s3>300){
if (s4<300){
    analogWrite(m1p1,0);
    analogWrite(m1p2,250);
    analogWrite(m2p1,0);
    analogWrite(m2p2,250);
    delay(100);
    analogWrite(m1p1,0);
    analogWrite(m1p2,220);
    analogWrite(m2p1,220);
    analogWrite(m2p2,0);
    delay(1200);
}
}
}
}
if (s1>300){
if (s2>300){
if (s3>300){
if (s4>300){
    analogWrite(m1p1,0);
    analogWrite(m1p2,250);
    analogWrite(m2p1,0);
    analogWrite(m2p2,250);
    delay(100);
    analogWrite(m1p1,0);
    analogWrite(m1p2,220);
    analogWrite(m2p1,220);
    analogWrite(m2p2,0);
    delay(1200);
}
}
}
}
if (s1<300){
if (s2>300){
if (s3<300){
if (s4<300){
  delay(1);
  if(s1<300){
  if(s2<300){
  if(s3>300){
  if(s4<300){
    analogWrite(m1p1,0);
    analogWrite(m1p2,250);
    analogWrite(m2p1,0);
    analogWrite(m2p2,250);
    delay(100);
    analogWrite(m1p1,0);
    analogWrite(m1p2,220);
    analogWrite(m2p1,220);
    analogWrite(m2p2,0);
    delay(1200);
  }
  }
  }
  }
}
}
}
}
if (s1>300){
if (s2>300){
if (s3<300){
if (s4<300){
  delay(1);
  if(s1<300){
  if(s2<300){
  if(s3>300){
  if(s4<300){
    analogWrite(m1p1,0);
    analogWrite(m1p2,250);
    analogWrite(m2p1,0);
    analogWrite(m2p2,250);
    delay(100);
    analogWrite(m1p1,0);
    analogWrite(m1p2,220);
    analogWrite(m2p1,220);
    analogWrite(m2p2,0);
    delay(1200);
  }
  }
  }
  }
}
}
}
}
if (s1<300){
if (s2<300){
if (s3>300){
if (s4>300){
  delay(1);
  if(s1<300){
  if(s2>300){
  if(s3<300){
  if(s4<300){
    analogWrite(m1p1,0);
    analogWrite(m1p2,250);
    analogWrite(m2p1,0);
    analogWrite(m2p2,250);
    delay(100);
    analogWrite(m1p1,0);
    analogWrite(m1p2,220);
    analogWrite(m2p1,220);
    analogWrite(m2p2,0);
    delay(1200);
  }
  }
  }
  }
}
}
}
}
}


