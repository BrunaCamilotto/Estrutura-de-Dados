#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], soma[5];

    printf("3.1 - Digite 5 valores para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("3.2 - Digite 5 valores para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 5; i++) {
        soma[i] = vetor1[i] + vetor2[i];
    }

    printf("Vetor Soma:\n");
    for (int i = 0; i < 5; i++) {
        printf("%3d ", soma[i]);
    }

    printf("\n");

    return 0;
}

