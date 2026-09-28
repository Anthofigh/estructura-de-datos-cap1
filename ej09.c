/* Ejercicio 9: clasificacion de temperatura */
#include <stdio.h>

int main(void) {
    float temp;

    printf("Temperatura ambiental (C): ");
    scanf("%f", &temp);

    if (temp < 0) {
        printf("Clasificacion: Congelacion\n");
    } else if (temp <= 20) {
        printf("Clasificacion: Frio\n");
    } else {
        printf("Clasificacion: Templado\n");
    }
    return 0;
}
