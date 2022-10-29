ur with ir    
BY DEBANKAR SHUBHRAM


#define trigPin 5   //defining ur pin
#define echoPin 6   //defining ur pin
#define IR A1       //defining ir pin
void setup() 
{
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);     //describing about pin
  pinMode(echoPin, INPUT);      //describing about pin
  pinMode(IR,INPUT);            //describing about pin
}
void loop() 
{
  long duration, distance;
  digitalWrite(trigPin, LOW);        
  delayMicroseconds(3);              
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);           
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  //Serial.println(duration);
   int debankar = analogRead(IR);     //assigning a variable debanker the analogread of ir sensor
  Serial.println(debankar);           //printing in serial monitor
