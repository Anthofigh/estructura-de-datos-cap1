/* Ejercicio 1: costo total de procesamiento de datos */
#include <stdio.h>

int main(void) {
    float horas, tarifa, costo_total;

    printf("Horas dedicadas al procesamiento: ");
    scanf("%f", &horas);
    printf("Costo por hora (S/): ");
    scanf("%f", &tarifa);

    costo_total = horas * tarifa;

    printf("\n===== RESUMEN DEL PROCESAMIENTO =====\n");
    printf("Horas trabajadas : %.2f h\n", horas);
    printf("Tarifa aplicada  : S/ %.2f por hora\n", tarifa);
    printf("Costo final      : S/ %.2f\n", costo_total);
    return 0;
}
