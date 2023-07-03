#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

struct cilindro {
  float diametro;
  float carrera;
};

struct motor {
  int identificador;
  struct cilindro cilindro;
  int num_cilindros;
  float cilindrada;
};

int main(void) {
  struct motor motor1;

  printf("Introduce el identificador: ");
  scanf("%d", &motor1.identificador);
  
  printf("Introduce el diámetro del cilindro (mm): ");
  scanf("%f", &motor1.cilindro.diametro);

  printf("Introduce la carrera del cilindro (mm): ");
  scanf("%f", &motor1.cilindro.carrera);

  printf("Introduce el número de cilindros: ");
  scanf("%d", &motor1.num_cilindros);

  motor1.cilindrada = (pow(motor1.cilindro.diametro / 10, 2) * motor1.cilindro.carrera * M_PI * motor1.num_cilindros) / 4;

  printf("Identificador: %d\n", motor1.identificador);
  printf("Diámetro (mm): %.2f\n", motor1.cilindro.diametro);
  printf("Carrera (mm): %.2f\n", motor1.cilindro.carrera);
  printf("Número de cilindros: %d\n", motor1.num_cilindros);
  printf("Cilindrada: %.2f\n", motor1.cilindrada);

 
}
