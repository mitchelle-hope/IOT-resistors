// C++ code
//
int green1 = 11;
int green2 = 12;
int yellow1 =7;
int yellow2 =8;
int red1 = 3;
int red2 =5;
void setup()
{
  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
}

void loop()
{
  digitalWrite(green1, HIGH);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red1,LOW);
  digitalWrite(red2, HIGH);
  delay(8000); // Wait for 1000 millisecond(s)
  
 
  
   digitalWrite(green1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, HIGH);
  digitalWrite(red1,LOW);
  digitalWrite(red2, LOW);
  delay(5000); // Wait for 1000 millisecond(s)
  
  
   digitalWrite(green1, LOW);
  digitalWrite(green2, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red1,HIGH);
  digitalWrite(red2, LOW);
  delay(5000); // Wait for 1000 millisecond(s)
  
}