int led1 = 8;
int led2 = 9;
int led3 = 10;
int sensor1 = 2;
int sensor2 = 3;
int sensor3 = 4;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(sensor1, INPUT);
  pinMode(led2, OUTPUT);
  pinMode(sensor2, INPUT);
  pinMode(led3, OUTPUT);
  pinMode(sensor3, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorval1 = digitalRead(sensor1);
  Serial.println(sensorval1);
  
  if (sensorval1 == HIGH) {
    digitalWrite(led1, HIGH);
  }
  else {
    digitalWrite(led1, LOW);
  }

  int sensorval2 = digitalRead(sensor2);
  Serial.println(sensorval2);
  
  if (sensorval2 == HIGH) {
    digitalWrite(led2, HIGH);
  }
  else {
    digitalWrite(led2, LOW);
  }

  int sensorval3 = digitalRead(sensor3);
  Serial.println(sensorval3);
  
  if (sensorval3 == HIGH) {
    digitalWrite(led3, HIGH);
  }
  else {
    digitalWrite(led3, LOW);
  }
  
}
