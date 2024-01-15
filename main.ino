


void setup() {
  pinMode(2, OUTPUT);
  pinMode(8, INPUT);
  pinMode(4, OUTPUT);
  pinMode(12, INPUT);
  pinMode(7, OUTPUT);
  pinMode(13, INPUT);
  Serial.begin(9600);
}

void loop() {
  distancia1 = calculateDistance(2, 8);
  distancia2 = calculateDistance(4, 12);
  distancia3 = calculateDistance(7, 13);

 
  if (distancia1 <= 30) {
    //Ré
    //Direita
    
    
  }

  if (distancia2 <= 30) {
    //Ré
    //Direita
    
  }
  if (distancia3 <= 30) {
    //Ré
    //Esquerda
    
  }

  
  delay(100);
}



float calculateDistance(int triggerPin, int echoPin) {
  digitalWrite(triggerPin, LOW);
  delay(2);
  digitalWrite(triggerPin, HIGH);
  delay(10);
  digitalWrite(triggerPin, LOW);
  float Dist = pulseIn(echoPin, HIGH) / 58.2;;
  return Dist;
}

void freio() {
  digitalWrite(5, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(9, HIGH);
  digtalWrite(10, LOW);
  delay(1500);

}
void frente() {
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(9, HIGH);
  digtalWrite(10, HIGH);
  delay(1500);

}

void ré() {
  digitalWrite(5, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(9, LOW);
  digtalWrite(10, HIGH);
  delay(1500);

  
 }
