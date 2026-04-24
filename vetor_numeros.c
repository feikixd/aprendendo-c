#include <stdio.h>

// Programa simples que pede 5 números e mostra eles depois

int main() {

    int numeros[5];

    printf("Coloque 5 numeros1:\n");

    // pegando os numeros
    for (int i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nOs numeros que voce digitou foram:\n");

    // mostrando os numeros
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}