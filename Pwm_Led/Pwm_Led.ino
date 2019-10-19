int AA = 0;
int BB = 178;
int CC = 255;
int fadeAmount = 5;
int delayDuration = 2000;


void setup()  {
  pinMode(3, OUTPUT);
}

void loop()  {
  analogWrite(3, AA);
  delay(delayDuration);
    
  analogWrite(3, BB);
  delay(delayDuration);
  
  analogWrite(3, CC); 
  delay(delayDuration) ;                         
}
