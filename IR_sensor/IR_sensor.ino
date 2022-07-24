// C++ code
//
int irsensor = 9;
void setup()
{
pinMode(13,OUTPUT);
pinMode(irsensor,INPUT);
Serial.begin(9600);
}

void loop()
{
int state = digitalRead(irsensor);
  if(state ==0){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }

}