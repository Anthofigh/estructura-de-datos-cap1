/* Ejercicio 3: conversion explicita de decimal a entero */
#include <stdio.h>

int main(void) {
    float medicion;
    int entero;
    float perdida;

    printf("Medicion del sensor (decimal, ej. 18.9): ");
    scanf("%f", &medicion);

    entero = (int)medicion;          /* conversion explicita: trunca */
    perdida = medicion - (float)entero;

    printf("\nValor decimal original : %.2f\n", medicion);
    printf("Valor entero (casting) : %d\n", entero);
    printf("Valor perdido          : %.2f (la conversion trunca la parte decimal)\n", perdida);
    return 0;
}
