/* MakerQuest - Projeto_1.3_Movimentos_Automáticos - Versão:1.0 Ago24 */
/*       Manuais&Códigos disponíveis em www.makerquest.com.br         */

#include <Servo.h>

// Definição dos objetos servos do braço robótico
Servo servo1;  // Cria objeto servo para controlar o servo1 - BASE
Servo servo2;  // Cria objeto servo para controlar o servo2 - OMBRO
Servo servo3;  // Cria objeto servo para controlar o servo3 - COTOVELO
Servo servo4;  // Cria objeto servo para controlar o servo4 - GARRA

// Variáveis 
int pos = 0;    // Variável para armazenar a posição do servo
 
void setup() {
  // Anexa o objeto servo ao pino
  servo1.attach(11);  // Anexa o servo no pino 11 - BASE
  servo2.attach(10);  // Anexa o servo no pino 10 - OMBRO
  servo3.attach(9);   // Anexa o servo no pino 9 - COTOVELO
  servo4.attach(6);   // Anexa o servo no pino 6 - GARRA
  
  // Configura as posições iniciais dos servos
  servo1.write(45);   // BASE: posição inicial de 90 graus
  servo2.write(90);   // OMBRO: posição inicial de 90 graus
  servo3.write(60);   // COTOVELO: posição inicial de 60 graus
  servo4.write(160);  // GARRA: posição inicial de 160 graus
}
 
void loop() {
  // Movimento do servo1 (BASE) de 45 graus a 90 graus
  for (pos = 45; pos <= 90; pos += 1) {
    servo1.write(pos);          // Move o servo1 para a posição 'pos'
    delay(15);                  // Aguarda 15 ms para o servo alcançar a posição
  }
  
  // Movimento do servo2 (OMBRO) de 90 graus a 135 graus
  for (pos = 90; pos <= 135; pos += 1) {
    servo2.write(pos);          // Move o servo2 para a posição 'pos'
    delay(15);                  // Aguarda 15 ms para o servo alcançar a posição
  }
  
  // Movimento do servo3 (COTOVELO) de 60 graus a 75 graus
  for (pos = 60; pos <= 75; pos += 1) {
    servo3.write(pos);          // Move o servo3 para a posição 'pos'
    delay(15);                  // Aguarda 15 ms para o servo alcançar a posição
  }
  
  // Movimento do servo4 (GARRA) de 160 graus a 100 graus
  for (pos = 160; pos >= 100; pos -= 1) {
    servo4.write(pos);          // Move o servo4 para a posição 'pos'
    delay(15);                  // Aguarda 15 ms para o servo alcançar a posição
  }
  
  // Movimento do servo1 (BASE) de 90 graus a 45 graus
  for (pos = 90; pos >= 45; pos -= 1) {
    servo1.write(pos);          // Move o servo1 para a posição 'pos'
    delay(15);                  // Aguarda 15 ms para o servo alcançar a posição
  }
  
  // Movimento do servo2 (OMBRO) de 135 graus a 90 graus
  for (pos = 135; pos >= 90; pos -= 1) {
    servo2.write(pos);          // Move o servo2 para a posição 'pos'
    delay(15);                  // Aguarda 15 ms para o servo alcançar a posição
  }
  
  // Movimento do servo3 (COTOVELO) de 75 graus a 60 graus
  for (pos = 75; pos >= 60; pos -= 1) {
    servo3.write(pos);          // Move o servo3 para a posição 'pos'
    delay(15);                  // Aguarda 15 ms para o servo alcançar a posição
  }
  
  // Movimento do servo4 (GARRA) de 100 graus a 160 graus
  for (pos = 100; pos <= 160; pos += 1) {
    servo4.write(pos);          // Move o servo4 para a posição 'pos'
    delay(15);                  // Aguarda 15 ms para o servo alcançar a posição
  }
}
/* MakerQuest - Projeto_1.3_Movimentos_Automáticos - Versão:1.0 Ago24 */
/*       Manuais&Códigos disponíveis em www.makerquest.com.br         */