
const int trigPin = 6;
const int echoPin = 5;
const int buzzer = 2;
float new_delay;

long duration;
int distance;

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);

  
}

void loop() {
  


  
  digitalWrite(trigPin, LOW);
  delayMicroseconds (2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds (10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH, 3000000);
  distance = (duration/2) / 29.1;
  new_delay = (distance*3) +30;
  Serial.print (distance);
  Serial.println (" cm");
  Serial.println("working...");
  if (distance < 200)
  {
    digitalWrite(buzzer,HIGH);
    delay(new_delay);
    digitalWrite (buzzer,LOW);
  }
  else
  {
    digitalWrite(buzzer,LOW);
  }

  delay (2000);

}