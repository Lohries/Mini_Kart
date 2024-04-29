void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, INPUT);
  pinMode(12, OUTPUT);
  pinMode(13, INPUT);

  
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 

  Serial.begin(9600);
}

void loop() {
  float distancia1 = calculateDistance(10, 11);
  float distancia2 = calculateDistance(8, 9);
  float distancia3 = calculateDistance(13, 12);

  if (distancia1 <= 50) {
    re();
    esquerda();
    
  }

  if (distancia2 <= 50) {
    re();
    
    
  }

  if (distancia3 <= 50) {
    re();
    direita();
    
    
  }
  frente();


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
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, HIGH);
  Serial.println("Frente");
  delay(1500);
}

void re() {
  digitalWrite(4, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(2, LOW);
  Serial.println("Ré");
  delay(1500);
}

void esquerda() {
  digitalWrite(3, LOW); //Permitir direita
  digitalWrite(6, LOW); //Atras
  digitalWrite(2, HIGH); //Frente
  digitalWrite(4, HIGH); //Permitir esquerda
  digitalWrite(7, HIGH); //Atras
  digitalWrite(5, HIGH); //Frebte
  
  Serial.println("Esquerda");
  delay(1000);
}

void direita() {
  digitalWrite(3, HIGH); //Permitir direita
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(4, LOW); //Permitir esquerda
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
  
  Serial.println("Direita");
  delay(1000);
  
}
