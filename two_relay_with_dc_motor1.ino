const int relay1 =3;
const int relay2 =4;  

void setup() {
 
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
} 

void loop() {

  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  delay(3000);

  digitalWrite(relay1, LOW);
  digitalWrite(relay2, HIGH);
  delay(3000);

} 
