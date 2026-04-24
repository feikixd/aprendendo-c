#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Jogo simples de par ou impar

int main() {

    int escolha, numeroUsuario, numeroPc, soma;

    srand(time(NULL)); // gera numero aleatorio

    printf("Par ou Impar?\n");
    printf("0 - Par\n1 - Impar\n");
    scanf("%d", &escolha);

    printf("Escolhe um numero: ");
    scanf("%d", &numeroUsuario);

    numeroPc = rand() % 10; // numero de 0 a 9

    printf("\nComputador escolheu: %d\n", numeroPc);

    soma = numeroUsuario + numeroPc;

    printf("Soma deu: %d\n", soma);

    if (soma % 2 == 0) {
        printf("Deu PAR\n");

        if (escolha == 0) {
            printf("Voce ganhou!\n");
        } else {
            printf("Voce perdeu!\n");
        }

    } else {
        printf("Deu IMPAR\n");

        if (escolha == 1) {
            printf("Voce ganhou!\n");
        } else {
            printf("Voce perdeu!\n");
        }
    }

    return 0;
}