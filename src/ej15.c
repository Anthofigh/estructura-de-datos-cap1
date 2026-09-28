/* Ejercicio 15: funciones calcular_promedio y contar_sobre_promedio */
#include <stdio.h>

float calcular_promedio(float a, float b, float c) {
    return (a + b + c) / 3.0f;
}

int contar_sobre_promedio(float a, float b, float c) {
    float prom = calcular_promedio(a, b, c);
    int contador = 0;
    if (a > prom) contador++;
    if (b > prom) contador++;
    if (c > prom) contador++;
    return contador;
}

int main(void) {
    float m1, m2, m3;

    printf("Medicion 1: ");
    scanf("%f", &m1);
    printf("Medicion 2: ");
    scanf("%f", &m2);
    printf("Medicion 3: ");
    scanf("%f", &m3);

    printf("\nPromedio: %.2f\n", calcular_promedio(m1, m2, m3));
    printf("Mediciones por encima del promedio: %d\n", contar_sobre_promedio(m1, m2, m3));
    return 0;
}
