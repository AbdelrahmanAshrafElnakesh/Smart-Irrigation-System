const int SensorPin = A0;
const int RelayPin = 2;
const int PumpDuration = 3000;

void setup() {
  // put your setup code here, to run once:
pinMode(SensorPin, INPUT);
pinMode(RelayPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int ReadValue = analogRead(SensorPin);
if(ReadValue > 500){
  digitalWrite(RelayPin, HIGH);
  delay(PumpDuration);
  digitalWrite(RelayPin, LOW);
}
Serial.println(ReadValue);
delay(500);
}
