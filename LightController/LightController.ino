int read_PIN = A5;
float calcV;
void setup() {
  // put your setup code here, to run once:
  pinMode(read_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogRead(read_PIN);
  calcV = (5./1023.) * (analogRead(read_PIN));
  Serial.println(calcV);
}
