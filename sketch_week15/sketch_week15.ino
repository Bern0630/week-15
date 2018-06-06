int outputValue = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorRead = analogRead(A0);
if(sensorRead < 650)sensorRead = 650;
if(sensorRead > 955)sensorRead = 955;
int outputValue = map(sensorRead, 650, 955, 0, 255);
analogWrite(9, outputValue);
Serial.println(outputValue);
delay(200);
}
