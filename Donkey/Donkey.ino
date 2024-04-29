#define ENB1 13
#define ENB2 12
#define ENA1_F 9
#define ENA2_F 11
#define ENA1_B 8
#define ENA2_B 10



void setup() {

  pinMode(A0, INPUT);
  pinMode(ENB1, OUTPUT);
  pinMode(ENB2, OUTPUT);
  pinMode(ENA1_F, OUTPUT);
  pinMode(ENA2_F, OUTPUT);
  pinMode(ENA1_B, OUTPUT);
  pinMode(ENA2_B, OUTPUT);
  Serial.begin(9600);

}

void loop() {


  analogWrite(ENB1, 500);
  analogWrite(ENB2, 500);
  analogWrite(ENA1_F, HIGH);
  analogWrite(ENA2_F, HIGH);
  analogWrite(ENA1_B, LOW);
  analogWrite(ENA2_B, LOW);
  
  
  delay(5000);
  

}

float distance() {


}