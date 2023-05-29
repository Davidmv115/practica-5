#include <stdio.h>
#include "misfunciones.h"

int main() {
    int x, y;

    do {
        printf("ingresa dos números (0 0 para terminar): ");
        scanf("%d %d", &x, &y);

        if (x != 0 || y != 0) {
            int suma = sumar_enteros(x, y);
            int resta = restar_enteros(x, y);

            printf("Suma: %d\n", suma);
            printf("Resta: %d\n", resta);
        }
    } while (x != 0 || y != 0);

    printf("El programa termino\n");

    return 0;
}
