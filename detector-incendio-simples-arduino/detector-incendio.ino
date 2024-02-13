int sensorDeGas = 0;
int sensorDeTemperatura = 0;

void setup ( ) {
	pinMode (A0, INPUT);
  	pinMode (9, OUTPUT);
  	pinMode (12, OUTPUT);
  	pinMode (A1, INPUT);
}

void loop ( ) {
  sensorDeGas = analogRead(A0); //leitura do pino analógico conectado ao sensor de gás 
  if (sensorDeGas >= 150) {
    tone(7, 349, 2000); //som de frequência 349 Hz será produzido
    digitalWrite(9, HIGH); //LED vermelho irá acender
  }
  
  sensorDeTemperatura = analogRead(A1); 
  if (sensorDeTemperatura >= 50) {
    tone(7, 349, 2000);
    digitalWrite(12, HIGH);
  }
  delay(1000);
}
    
    