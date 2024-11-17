/* MakerQuest - Projeto_1.3_Movimentos_Automáticos - Versão:1.0 Ago24 */
/*       Manuais&Códigos disponíveis em www.makerquest.com.br         */

#include <Servo.h>

// Definição dos objetos servos do braço robótico
Servo servo1;  // Cria objeto servo para controlar o servo1 - BASE
Servo servo2;  // Cria objeto servo para controlar o servo2 - OMBRO
Servo servo3;  // Cria objeto servo para controlar o servo3 - COTOVELO
Servo servo4;  // Cria objeto servo para controlar o servo4 - GARRA

// Pino ligado ao REC do modulo
int pino_rec = 6;
// Pino ligado ao P-E (PLAYE) do modulo
int pino_playe = 7 ;

// Variáveis 
int pos = 0;    // Variável para armazenar a posição do servo
int velocidade = 1500;  

void setup() {

  Serial.begin(9600);
  // Anexa o objeto servo ao pino
  servo1.attach(11);  // Anexa o servo no pino 11 - BASE
  // servo2.attach(10);  // Anexa o servo no pino 10 - OMBRO
  servo3.attach(9);   // Anexa o servo no pino 9 - COTOVELO
  //servo4.attach(6);   // Anexa o servo no pino 6 - GARRA
  
  // Configura as posições iniciais dos servos
  servo1.write(360);   // BASE: posição inicial de 90 graus
  servo2.write(90);   // OMBRO: posição inicial de 90 graus
  servo3.write(0);   // COTOVELO: posição inicial de 60 graus
  servo4.write(160);  // GARRA: posição inicial de 160 graus

  //pinMode(pino_rec, OUTPUT); //REC
  pinMode(pino_playe, OUTPUT); //PLAYER
}
 
void loop() {
  // Movimento do servo1 (BASE) de 45 graus a 90 graus
  // for (pos = 45; pos <= 90; pos += 1) {
  //   servo1.write(pos);          // Move o servo1 para a posição 'pos'
  //   delay(15);                  // Aguarda 15 ms para o servo alcançar a posição
  // }



  Serial.println("Movimento: Sentido horário");
  for (velocidade = 1600; velocidade <= 2000; velocidade += 10) { // 1600 até 2000 para controle da velocidade
    servo1.writeMicroseconds(velocidade); // Ajusta a velocidade no sentido horário
    Serial.print("Velocidade atual: ");
    Serial.println(velocidade);
    delay(150);  // Ajuste do tempo de espera para suavidade
  }

  Serial.println("Pausa no centro");
  servo1.writeMicroseconds(1500);  // 1500 é geralmente o ponto central (servo parado)

  digitalWrite(pino_playe, HIGH);
  Serial.println("Reproduzindo!");
  delay(1000);  // Pausa por 1 segundo
  digitalWrite(pino_playe, LOW);
  // Movimento do servo2 (OMBRO) de 90 graus a 135 graus
  for (pos = 90; pos <= 135; pos += 1) {
    servo2.write(pos);          // Move o servo2 para a posição 'pos'
    delay(15);                  // Aguarda 15 ms para o servo alcançar a posição
  }
  
  // Movimento do servo3 (COTOVELO) de 60 graus a 75 graus
  for (pos = 0; pos <= 45; pos += 1) {
    servo3.write(pos);          // Move o servo3 para a posição 'pos'
    delay(150);                  // Aguarda 15 ms para o servo alcançar a posição
  }
  
  // Movimento do servo4 (GARRA) de 160 graus a 100 graus
  for (pos = 160; pos >= 100; pos -= 1) {
    servo4.write(pos);          // Move o servo4 para a posição 'pos'
    delay(15);                  // Aguarda 15 ms para o servo alcançar a posição
  }
  
  // Movimento do servo1 (BASE) de 90 graus a 45 graus
  // for (pos = 90; pos >= 45; pos -= 1) {
  //   servo1.write(pos);          // Move o servo1 para a posição 'pos'
  //   delay(15);                  // Aguarda 15 ms para o servo alcançar a posição
  // }

  //Serial.println("Movimento: Sentido anti-horário");
  for (velocidade = 1400; velocidade >= 1000; velocidade -= 10) { // 1400 até 1000 para controle da velocidade
    servo1.writeMicroseconds(velocidade); // Ajusta a velocidade no sentido anti-horário
    Serial.print("Velocidade atual: ");
    Serial.println(velocidade);
    delay(150);  // Ajuste do tempo de espera para suavidade
  }

  // Pausa no centro novamente (parado)
  Serial.println("Pausa no centro");
  servo1.writeMicroseconds(1500);  // 1500 é o ponto central (servo parado)
  digitalWrite(pino_playe, HIGH);
  Serial.println("Reproduzindo!");
  delay(1000);  
  digitalWrite(pino_playe, LOW);
  
  // Movimento do servo2 (OMBRO) de 135 graus a 90 graus
  for (pos = 135; pos >= 90; pos -= 1) {
    servo2.write(pos);          // Move o servo2 para a posição 'pos'
    delay(15);                  // Aguarda 15 ms para o servo alcançar a posição
  }
  
  // Movimento do servo3 (COTOVELO) de 75 graus a 60 graus
  // for (pos = 45; pos >= 0; pos -= 1) {
  //   servo3.write(pos);          // Move o servo3 para a posição 'pos'
  //   delay(150);                  // Aguarda 15 ms para o servo alcançar a posição
  // }
  
  // Movimento do servo4 (GARRA) de 100 graus a 160 graus
  for (pos = 100; pos <= 160; pos += 1) {
    servo4.write(pos);          // Move o servo4 para a posição 'pos'
    delay(15);                  // Aguarda 15 ms para o servo alcançar a posição
  }
}
/* MakerQuest - Projeto_1.3_Movimentos_Automáticos - Versão:1.0 Ago24 */
/*       Manuais&Códigos disponíveis em www.makerquest.com.br         */