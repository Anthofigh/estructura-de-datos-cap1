/* Ejercicio 6: evolucion de una variable acumuladora */
#include <stdio.h>

int main(void) {
    int validos = 4;
    printf("Estado inicial          : validos = %d\n", validos);

    validos += 3;
    printf("Despues de incrementar 3: validos = %d\n", validos);

    validos *= 2;
    printf("Despues de duplicar     : validos = %d\n", validos);
    return 0;
}
