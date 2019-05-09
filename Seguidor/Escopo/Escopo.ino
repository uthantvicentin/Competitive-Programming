/*
<<<<<<< HEAD

	Projeto de extensão - Robótica educacional
	Escopo algoritmo - Robô seguidor de linha

*/
=======

	 Projeto de extensão - Robótica educacional
	 Escopo algoritmo - Robô seguidor de linha

 */
>>>>>>> 4e146666430fab97fee535864309ffcdaf0ed0c3

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
<<<<<<< HEAD

  Serial.begin(9600); //#include <stdio.h>

  pinMode(motorDir, OUTPUT);
  pinMode(motorEsq, OUTPUT);

  Frente();
=======

	Serial.begin(9600); //#include <stdio.h>

	pinMode(motorDir, OUTPUT);
	pinMode(motorEsq, OUTPUT);

	Frente();
>>>>>>> 4e146666430fab97fee535864309ffcdaf0ed0c3
}

//int main()
void loop() { 
<<<<<<< HEAD

  ESQUERDA = analogRead(sensorEsq); // Leitura do sensor infravermelho esquerdo
  DIREITA = analogRead(sensorDir); // Leitura do sensor infravermelho direito
=======

	ESQUERDA = analogRead(sensorEsq); // Leitura do sensor infravermelho esquerdo
	DIREITA = analogRead(sensorDir); // Leitura do sensor infravermelho direito


	if((DIREITA < INTERVALO) && (ESQUERDA < INTERVALO))
		Frente();
>>>>>>> 4e146666430fab97fee535864309ffcdaf0ed0c3

	else if(DIREITA > INTERVALO) {
		Horario();
		while(1){
			ESQUERDA = analogRead(sensorEsq); // Leitura do sensor infravermelho esquerdo
			if(ESQUERDA > INTERVALO) break;
		}
	}

<<<<<<< HEAD
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
  
  if((DIREITA > INTERVALO) && (ESQUERDA > INTERVALO)){
    
  }


}

//Robô caminha para frente
void Frente() {
  analogWrite(motorDir, VELOCIDADE);
  analogWrite(motorEsq, VELOCIDADE);
=======
	else if(ESQUERDA > INTERVALO) {
		Antihorario();
		while(1){
			DIREITA = analogRead(sensorDir); //Leitura do sensor infravermelho esquerdo
			if(DIREITA > INTERVALO) break;
		}
	}

	if((DIREITA > INTERVALO) && (ESQUERDA > INTERVALO)){



	}

}

//Robô caminha para frente
void Frente() {
	analogWrite(motorDir, VELOCIDADE);
	analogWrite(motorEsq, VELOCIDADE);
>>>>>>> 4e146666430fab97fee535864309ffcdaf0ed0c3
}

//Robô gira no sentido anti-horario
void Antihorario() {
<<<<<<< HEAD
  analogWrite(motorDir, VELOCIDADE);
  analogWrite(motorEsq, PARADO);
=======
	analogWrite(motorDir, VELOCIDADE);
	analogWrite(motorEsq, PARADO);
>>>>>>> 4e146666430fab97fee535864309ffcdaf0ed0c3
}

//Robô gira no sentido horário
void Horario() {
<<<<<<< HEAD
  analogWrite(motorDir, PARADO);
  analogWrite(motorEsq, VELOCIDADE);
=======
	analogWrite(motorDir, PARADO);
	analogWrite(motorEsq, VELOCIDADE);
>>>>>>> 4e146666430fab97fee535864309ffcdaf0ed0c3
}

//Robô permanece em repouso
void Parar() {
<<<<<<< HEAD
  analogWrite(motorDir, PARADO);
  analogWrite(motorEsq, PARADO);
=======
	analogWrite(motorDir, PARADO);
	analogWrite(motorEsq, PARADO);
>>>>>>> 4e146666430fab97fee535864309ffcdaf0ed0c3
}
