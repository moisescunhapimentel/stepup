int ledPin = 6;  // define a porta onde está conectado o mosfet
int time = 1;  // define o intervalo para o led


void setup() {
  pinMode(ledPin, OUTPUT);
  //Serial.begin(9600); depuração
}

void loop() {
  
  int voltage = analogRead(0); // 0 a 1023
  //Serial.println(voltage / 1023.0 * 5);
  //Serial.println(voltage);
  
  if (voltage < 512) {
    digitalWrite(ledPin, HIGH);  
    delay(time);
    digitalWrite(ledPin, LOW);
    delay(time);
  } else {
    delay(2);
  }
}
