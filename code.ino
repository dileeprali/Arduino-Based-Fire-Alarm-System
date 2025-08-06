
const int gasSensorPin = A0;
const int tempSensorPin = A1;
const int ledPin = 12;
const int buzzerPin = 3;

const int gasThreshold = 400;    
const float tempThreshold = 50.0; 

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gasValue = analogRead(gasSensorPin);
  int tempValue = analogRead(tempSensorPin);

 
  float temperature = (tempValue * 5.0 / 1023.0) * 100;

  
  Serial.print("Gas: ");
  Serial.print(gasValue);
  Serial.print(" | Temp: ");
  Serial.println(temperature);

 
  if (gasValue > gasThreshold || temperature > tempThreshold) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }

  delay(500); 
}
