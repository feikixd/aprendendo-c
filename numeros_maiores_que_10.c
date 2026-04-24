#include <stdio.h>

// Programa que mostra apenas numeros maiores que 10

int main() {

    int numeros[5];

    printf("Digita ai 5 numeros:\n");

    // entrada
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros maiores que 10:\n");

    // verificando
    for (int i = 0; i < 5; i++) {
        if (numeros[i] > 10) {
            printf("%d\n", numeros[i]);
        }
    }

    return 0;
}