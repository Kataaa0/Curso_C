#include <stdio.h>

int main() {
  int numero= 3;
  int numero2= 7;
  if (numero > 0&&numero2 >0 ){
     printf("Ambos numeros son positivos\n");
  }
  else if (numero<0  || numero2 >0 ){
    printf("Alguno de los numeros es positivo\n");
  }
  else {
    printf("Ninguno de los dos son positivos");
  }
    printf("Fin del programa\n");
  
   
} 