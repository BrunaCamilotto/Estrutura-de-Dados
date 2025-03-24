#include <stdio.h>
#define TAMANHO 15

int main() {
    int vetor[TAMANHO];
    int contador = 0, numero = 1;

    while (contador < TAMANHO) {
        if (numero % 3 != 0 && numero % 5 != 0) {
            vetor[contador] = numero;
            contador++;
        }
        numero++;
    }

    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

