/* Ejercicio 7: condiciones minimas para aceptar un conjunto de datos */
#include <stdio.h>

int main(void) {
    int observaciones;
    float completos;

    printf("Numero de observaciones validas: ");
    scanf("%d", &observaciones);
    printf("Porcentaje de datos completos (%%): ");
    scanf("%f", &completos);

    if (observaciones >= 100 && completos >= 70.0f) {
        printf("\nResultado: el conjunto CUMPLE las condiciones minimas para ser analizado.\n");
    } else {
        printf("\nResultado: el conjunto NO cumple las condiciones minimas.\n");
        if (observaciones < 100)
            printf(" - Faltan observaciones: %d < 100\n", observaciones);
        if (completos < 70.0f)
            printf(" - Datos completos insuficientes: %.1f%% < 70%%\n", completos);
    }
    return 0;
}
