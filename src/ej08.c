/* Ejercicio 8: incorporacion de una observacion (operadores logicos) */
#include <stdio.h>

int main(void) {
    int edad, validado;

    printf("Edad del individuo: ");
    scanf("%d", &edad);
    printf("Registro validado? (1 = si, 0 = no): ");
    scanf("%d", &validado);

    if (edad >= 18 && validado) {
        printf("\nLa observacion PUEDE incorporarse al conjunto de datos.\n");
    } else {
        printf("\nLa observacion NO puede incorporarse.\n");
        if (!(edad >= 18))
            printf(" - Motivo: edad menor a 18.\n");
        if (!validado)
            printf(" - Motivo: registro no validado.\n");
    }
    return 0;
}
