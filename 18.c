#include <stdio.h>

void multiplica_vector(int *vector, int nElem, int valor);

int main() {
  int vector[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  multiplica_vector(&vector[0], 10, 3);

  for(int i = 0; i < 10; i++) {
    printf("%d ", vector[i]);
  }

  return 0;
}

void multiplica_vector(int *vector, int nElem, int numero) {
  for(int i = 0; i < nElem; i++) {
    *(vector + i) = *(vector + i) * numero;
  }
}
