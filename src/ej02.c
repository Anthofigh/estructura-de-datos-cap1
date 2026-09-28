/* Ejercicio 2: registro basico de una observacion */
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int id, edad, valido_in;
    float promedio;
    char categoria;
    bool valido;

    printf("Identificador (entero): ");
    scanf("%d", &id);
    printf("Edad: ");
    scanf("%d", &edad);
    printf("Valor promedio de la variable: ");
    scanf("%f", &promedio);
    printf("Categoria (una letra): ");
    scanf(" %c", &categoria);
    printf("Registro valido? (1 = si, 0 = no): ");
    scanf("%d", &valido_in);
    valido = (valido_in != 0);

    printf("\n===== OBSERVACION REGISTRADA =====\n");
    printf("Identificador : %d\n", id);
    printf("Edad          : %d anios\n", edad);
    printf("Promedio      : %.3f\n", promedio);
    printf("Categoria     : %c\n", categoria);
    printf("Estado        : %s\n", valido ? "Valido" : "No valido");
    return 0;
}
