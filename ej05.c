/* Ejercicio 5: distribucion de registros entre nodos */
#include <stdio.h>

int main(void) {
    int total, nodos;

    printf("Numero total de registros: ");
    scanf("%d", &total);
    printf("Numero de nodos de procesamiento: ");
    scanf("%d", &nodos);

    if (nodos <= 0 || total < 0) {
        printf("Error: el numero de nodos debe ser positivo y los registros no negativos.\n");
        return 1;
    }

    int por_nodo = total / nodos;    /* division entera */
    int sobrantes = total % nodos;   /* residuo */

    printf("\nRegistros por nodo             : %d\n", por_nodo);
    printf("Registros sin distribuir       : %d\n", sobrantes);
    printf("Verificacion (%d*%d + %d)      : %d\n", por_nodo, nodos, sobrantes,
           por_nodo * nodos + sobrantes);
    return 0;
}
