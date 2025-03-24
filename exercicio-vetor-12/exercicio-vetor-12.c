#include <stdio.h>
#define MAX 100

int main() {
    int lista[MAX], count = 0, num, busca, ultimaPosicao = -1;

    printf("12 - Digite valores (0 para encerrar):\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        lista[count++] = num;
    }

    if (count == 0) {
        printf("Nenhum valor foi inserido.\n");
        return 0;
    }

    printf("12 - Digite um numero para buscar: ");
    scanf("%d", &busca);

    for (int i = 0; i < count; i++) {
        if (lista[i] == busca) {
            ultimaPosicao = i;
        }
    }

    if (ultimaPosicao != -1) {
        printf("Numero %d encontrado pela ultima vez na posicao %d\n", busca, ultimaPosicao);
    } else {
        printf("Numero %d nao encontrado.\n");
    }

    return 0;

}
