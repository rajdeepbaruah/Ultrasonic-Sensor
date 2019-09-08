//Code Written By RAJDEEP BARUAH

int distance,duration;

void setup() {
  pinMode(2,OUTPUT);               //  Ultrasonic sensor Trigger Pin  
  pinMode(3,INPUT);                //  Ultrasonic sensor Echo Pin
  Serial.begin(9600);
}

void loop() {
  digitalWrite(2, LOW);
  delayMicroseconds(2);

  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);

  duration = pulseIn(3,HIGH);
  distance = duration*0.034/2;

  Serial.println(distance);
  delay(500);
  

}
