void setup() {
  pinMode(2, OUTPUT);
  pinMode(8, INPUT);
  pinMode(4, OUTPUT);
  pinMode(12, INPUT);
  pinMode(7, OUTPUT);
  pinMode(13, INPUT);

  
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 

  Serial.begin(9600);
}

void loop() {
  float distancia1 = calculateDistance(2, 8);
  float distancia2 = calculateDistance(4, 12);
  float distancia3 = calculateDistance(7, 13);

  if (distancia1 <= 50) {
    re();  //Funciona
    esquerda();
  }

  if (distancia2 <= 50) {
    re(); // Funciona
    // Direita
  }

  if (distancia3 <= 50) {
    re(); // Ré
    direita(); 
  }
  frente();



  // Repeat the above motor control logic as needed based on your application

  delay(100);
}

float calculateDistance(int triggerPin, int echoPin) {
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  float Dist = pulseIn(echoPin, HIGH) / 58.2;
  return Dist;
}



void frente() {
  digitalWrite(5, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  Serial.println("Frente");
  delay(1500);
}

void re() {
  digitalWrite(5, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  Serial.println("Ré");
  delay(1500);
}

void direita() {
  digitalWrite(9, HIGH); // Esquerda
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);  // Direita
  digitalWrite(3, HIGH);
  Serial.println("Direita");
  delay(1000);
}

void esquerda() {
  digitalWrite(9, LOW); // Esquerda
  digitalWrite(10, HIGH);
  digitalWrite(5, HIGH);  // Direita
  digitalWrite(3, LOW);
}
