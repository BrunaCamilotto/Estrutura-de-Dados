#include <stdio.h>
#define MAX 100

int main() {
    int lista[MAX], pares[MAX], impares[MAX], count = 0, tamPares = 0, tamImpares = 0, num;

    printf("13 - Digite valores (0 para encerrar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        lista[count++] = num;
    }

    if (count == 0) {
        printf("Nenhum valor foi inserido.\n");
        return 0;
    }

    for (int i = 0; i < count; i++) {
        if (lista[i] % 2 == 0) {
            pares[tamPares++] = lista[i];
        } else {
            impares[tamImpares++] = lista[i];
        }
    }

    printf("Valores Pares:\n");
    for (int i = 0; i < tamPares; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    printf("Valores Impares:\n");
    for (int i = 0; i < tamImpares; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;
}
