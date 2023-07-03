#include <stdio.h>
#include <stdlib.h>

struct producto {
    char descripcion[50];
    float precio;
    int codigo;
};

int main() {
    struct producto *prod;
    prod = malloc(sizeof(struct producto));

    printf("Introduce el codigo: ");
    scanf("%d", &(prod->codigo));

    printf("Introduce la descripcion: ");
    scanf("%s", prod->descripcion);

    printf("Introduce el precio: ");
    scanf("%f", &(prod->precio));

    printf("Codigo del articulo: %d\n", prod->codigo);
    printf("Descripcion: %s\n", prod->descripcion);
    printf("Precio: %.2f\n", prod->precio);

    free(prod);
    prod = NULL;

  
}
