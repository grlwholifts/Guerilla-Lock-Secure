const int buzzer = D6;
const int PIEZO_PIN = A0;

void setup() {
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT);
analogWrite(buzzer,0);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int old = analogRead(PIEZO_PIN);
  delay(5);
  int next= analogRead(PIEZO_PIN);
  int difference=old-next;
  Serial.println(difference); // Print the voltage.
  if(difference<=-30||difference>=30)
  {
    analogWrite(buzzer,120);
    delay(3000);
    }
    analogWrite(buzzer,0);
}
