#include <stdio.h>

int main() {
    int vetor[10];

    vetor[0] = 0;
    vetor[1] = 1;

    for (int i = 2; i < 10; i++) {
        vetor[i] = vetor[i - 1] + vetor[i - 2];
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

