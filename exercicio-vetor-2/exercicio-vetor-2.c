#include <stdio.h>

int main() {
    int vetor[10], i, pares = 0, impares = 0;

    printf("2 - Digite 10 valores:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Numeros pares: ");
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
            pares++;
        }
    }

    printf("\nNumeros impares: ");
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
            impares++;
        }
    }

    printf("\nQuantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    return 0;
}

