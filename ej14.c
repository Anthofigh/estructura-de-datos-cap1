/* Ejercicio 14: comparacion empirica O(n) vs O(n^2) con contadores */
#include <stdio.h>

int main(void) {
    int n;
    long long ops1 = 0, ops2 = 0;

    printf("Valor de n: ");
    scanf("%d", &n);

    /* Procedimiento 1: un solo recorrido -> O(n) */
    for (int i = 0; i < n; i++)
        ops1++;

    /* Procedimiento 2: dos ciclos anidados -> O(n^2) */
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            ops2++;

    printf("\n%-28s %-14s %s\n", "Procedimiento", "Operaciones", "Complejidad");
    printf("%-28s %-14lld O(n)\n", "1. Un solo recorrido", ops1);
    printf("%-28s %-14lld O(n^2)\n", "2. Ciclos anidados", ops2);
    printf("\nn = %d -> n = %d, n^2 = %lld\n", n, n, (long long)n * n);
    if (ops1 > 0)
        printf("El procedimiento 2 realiza %lld veces mas operaciones (factor n).\n", ops2 / ops1);
    return 0;
}
