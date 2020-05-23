int solsensor=2;
int sagsensor=4;
int ortasensor=7;
int soldurum;
int sagdurum;
int ortadurum;
int motor11=3;
int motor12=5;
int motor21=6;
int motor22=9;
int speed=90;
void setup(){
  pinMode(solsensor,INPUT);
  pinMode(sagsensor,INPUT);
  pinMode(ortasensor,INPUT); 
  pinMode(motor11,OUTPUT);
  pinMode(motor12,OUTPUT);
  pinMode(motor21,OUTPUT);
  pinMode(motor22,OUTPUT);
}
void loop(){
  soldurum=digitalRead(solsensor);
  sagdurum=digitalRead(sagsensor);
  ortadurum=digitalRead(ortasensor);
  if (soldurum==1 and sagdurum==0 and ortadurum==0){
    sol();
  }
  if (soldurum==0 and sagdurum==1 and ortadurum==0){
    sag();
  }
  if (soldurum==0 and sagdurum==0 and ortadurum==1){
    ileri();
  }
  if (soldurum==0 and sagdurum==0 and ortadurum==0){
    dur();
  }
}
void ileri(){
  analogWrite(motor11,speed);
  analogWrite(motor12,0);
  analogWrite(motor21,0);
  analogWrite(motor22,speed);
}
void sol(){
  analogWrite(motor11,speed);
  analogWrite(motor12,0);
  analogWrite(motor21,0);
  analogWrite(motor22,0);
}
void sag(){
  analogWrite(motor11,0);
  analogWrite(motor12,0);
  analogWrite(motor21,0);
  analogWrite(motor22,speed);
}
void dur(){
  analogWrite(motor11,0);
  analogWrite(motor12,0);
  analogWrite(motor21,0);
  analogWrite(motor22,0);
}
