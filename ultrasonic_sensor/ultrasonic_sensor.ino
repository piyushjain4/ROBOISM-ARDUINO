// C++ code
//
int trigpin = 11;
int echopin = 10;
void setup()
{
  Serial.begin(6900);
  pinMode(13,OUTPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);

}

void loop()
{

int dist = 0.01723*ultrasonic(11,10);
 Serial.println(dist);
  if(dist<150){
digitalWrite(13,HIGH);
  }
  else{
 digitalWrite(13,LOW);
  }

}

int ultrasonic(int trigpin,int echopin){
  
  digitalWrite(trigpin,LOW);
  delay(10);
  digitalWrite(trigpin,HIGH);
  delay(10);
  digitalWrite(trigpin,LOW);
  
  
 return pulseIn(echopin,HIGH);
}
  
