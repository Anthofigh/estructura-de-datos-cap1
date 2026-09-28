/* Ejercicio 13: estadisticas de edades con arreglos */
#include <stdio.h>

#define N 10

int main(void) {
    int edades[N];
    int minimo, maximo, suma = 0, sobre_media = 0;
    float media;

    for (int i = 0; i < N; i++) {
        printf("Edad del participante %d: ", i + 1);
        scanf("%d", &edades[i]);
    }

    minimo = maximo = edades[0];
    for (int i = 0; i < N; i++) {
        if (edades[i] < minimo) minimo = edades[i];
        if (edades[i] > maximo) maximo = edades[i];
        suma += edades[i];
    }
    media = (float)suma / N;

    for (int i = 0; i < N; i++)
        if (edades[i] > media) sobre_media++;

    printf("\nEdad minima : %d\n", minimo);
    printf("Edad maxima : %d\n", maximo);
    printf("Media       : %.2f\n", media);
    printf("Participantes con edad mayor a la media: %d\n", sobre_media);
    return 0;
}
