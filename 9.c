#include <stdio.h>

int main() {
  int n, contador_Aprobados, contador_suspensos;
  float nota;
  printf("Introduce el numero de alumnos");
  scanf("%d", &n);
  for(int i=1; i<=n; i++)
  printf("Introduce la nota del alumnos %d\n",i);
  scanf("%f", &nota);
  if(nota>=5){
    contador_Aprobados++;
  }
  else {
    contador_suspensos++;
  }
  printf("El numero de alumnos aprobados es: %d y el de alumnos suspensos: %d", contador_Aprobados, contador_suspensos);
}