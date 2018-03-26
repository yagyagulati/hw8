
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin9 = 9; 
int ledPin5 = 5;
int ledPin6 = 6;// select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
    pinMode(ledPin5, OUTPUT);
    pinMode(ledPin6, OUTPUT);
    pinMode(ledPin9, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  // turn the ledPin on
  if (sensorValue>=256){
    digitalWrite(ledPin9, HIGH);
  }
   if (sensorValue<=256){
    digitalWrite(ledPin9, LOW);
  }  
  if (sensorValue>=512){
    digitalWrite(ledPin5, HIGH);
  } 
  if (sensorValue<=512){
    digitalWrite(ledPin5, LOW);
  } 
  if (sensorValue>=768){
    digitalWrite(ledPin6, HIGH);
  } 
  if (sensorValue<=768){
    digitalWrite(ledPin6, LOW);
  }
}