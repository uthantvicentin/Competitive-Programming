/*
	Projeto de extensão - Robótica educacional
	Escopo algoritmo - Robô seguidor de linha
*/
#define sensorDir A1 // analogico 1
#define sensorEsq A0 // analogico 0

#define INTERVALO 200 // Intervalo de cor < 200 branco > preto
#define VELOCIDADE 100
#define PARADO 0

int motorDir = 5;
int motorEsq = 6;

int ESQUERDA;
int DIREITA;


void setup(){

  Serial.begin(9600); //#include <stdio.h>

  pinMode(motorDir, OUTPUT);
  pinMode(motorEsq, OUTPUT);

  Frente();
}

//int main()
void loop() { 

  ESQUERDA = analogRead(sensorEsq); // Leitura do sensor infravermelho esquerdo
  DIREITA = analogRead(sensorDir); // Leitura do sensor infravermelho direito

	if((DIREITA < INTERVALO) && (ESQUERDA < INTERVALO))
		Frente();

	else if(DIREITA > INTERVALO) {
		Horario();
		while(1){
			ESQUERDA = analogRead(sensorEsq); // Leitura do sensor infravermelho esquerdo
			if(ESQUERDA > INTERVALO) break;
		}
	}
   
  else if(ESQUERDA > INTERVALO) {
    Antihorario();
    while(1){
      DIREITA = analogRead(sensorDir); //Leitura do sensor infravermelho esquerdo
      if(DIREITA > INTERVALO) break;
    }
  }
  
}

//Robô caminha para frente
void Frente() {
	analogWrite(motorDir, VELOCIDADE);
	analogWrite(motorEsq, VELOCIDADE);
}

//Robô gira no sentido anti-horario
void Antihorario() {
	analogWrite(motorDir, VELOCIDADE);
	analogWrite(motorEsq, PARADO);
}

//Robô gira no sentido horário
void Horario() {
	analogWrite(motorDir, PARADO);
	analogWrite(motorEsq, VELOCIDADE);
}

//Robô permanece em repouso
void Parar() {
	analogWrite(motorDir, PARADO);
	analogWrite(motorEsq, PARADO);
}
