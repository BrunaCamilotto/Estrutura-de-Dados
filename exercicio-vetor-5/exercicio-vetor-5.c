#include <stdio.h>
#define MAX 100

int main() {
    int lista[MAX], quadrados[MAX], count = 0, num;

    printf("5 - Digite valores (0 para encerrar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        lista[count] = num;
        quadrados[count] = num * num;
        count++;
    }

    printf("Vetor original:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", lista[i]);
    }

    printf("\nVetor com quadrados:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", quadrados[i]);
    }
    printf("\n");

    return 0;
}

