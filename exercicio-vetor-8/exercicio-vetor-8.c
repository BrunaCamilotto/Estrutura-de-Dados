#include <stdio.h>
#define MAX 100

int main() {
    int lista[MAX], count = 0, num, busca, encontrado = 0;

    printf("8 - Digite valores (0 para encerrar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        lista[count++] = num;
    }

    if (count == 0) {
        printf("Nenhum valor foi inserido.\n");
        return 0;
    }

    printf("8 - Digite um numero para buscar: ");
    scanf("%d", &busca);

    printf("Posicoes do numero %d na lista:\n", busca);
    for (int i = 0; i < count; i++) {
        if (lista[i] == busca) {
            printf("Posicao %d\n", i);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Numero nao encontrado na lista.\n");
    }

    return 0;
}

