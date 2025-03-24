#include <stdio.h>
#define MAX 100

int main() {
    int lista[MAX], count = 0, num, busca, encontrado = 0;

    printf("11 - Digite valores (0 para encerrar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        lista[count++] = num;
    }

    if (count == 0) {
        printf("Nenhum valor foi inserido.\n");
        return 0;
    }

    printf("Digite um numero para buscar: ");
    scanf("%d", &busca);

    for (int i = 0; i < count; i++) {
        if (lista[i] == busca && !encontrado) {
            printf("Numero %d encontrado na posicao %d\n", busca, i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Numero %d nao encontrado.\n", busca);
    }

    return 0;
}
