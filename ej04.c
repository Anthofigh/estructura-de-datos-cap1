/* Ejercicio 4: operaciones aritmeticas entre dos algoritmos */
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Registros procesados por el algoritmo A: ");
    scanf("%d", &a);
    printf("Registros procesados por el algoritmo B: ");
    scanf("%d", &b);

    printf("\n===== RESULTADOS =====\n");
    printf("Suma        : %d + %d = %d\n", a, b, a + b);
    printf("Diferencia  : %d - %d = %d\n", a, b, a - b);
    printf("Producto    : %d * %d = %d\n", a, b, a * b);
    if (b != 0) {
        printf("Division ent: %d / %d = %d\n", a, b, a / b);
        printf("Residuo     : %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division ent: no definida (B = 0)\n");
        printf("Residuo     : no definido (B = 0)\n");
    }
    return 0;
}
