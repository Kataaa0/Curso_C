#include <stdio.h>

int main() {
  FILE *f;
  f = fopen("numeros.txt", "r");
  int suma = 0, numero;

  if (f == NULL) {
    printf("No se pudo abrir el archivo.\n");
    return 1;
  }

  while (fscanf(f, "%d", &numero) == 1) {
    suma += numero;
  }

  printf("La suma de todos los numeros del fichero es: %d\n", suma);

  fclose(f);

  return 0;
}
