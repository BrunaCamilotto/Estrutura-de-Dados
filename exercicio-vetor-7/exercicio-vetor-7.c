#include <stdio.h>
#define MAX 100

int main() {
    int lista[MAX], count = 0, num, soma = 0, acimaMedia = 0;
    float media;

    printf("7 - Digite valores (0 para encerrar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        lista[count++] = num;
        soma += num;
    }

    if (count == 0) {
        printf("Nenhum valor foi inserido.\n");
        return 0;
    }

    media = (float)soma / count;

    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);

    printf("Valores acima da media:\n");
    for (int i = 0; i < count; i++) {
        if (lista[i] > media) {
            printf("%d ", lista[i]);
            acimaMedia++;
        }
    }

    printf("\nQuantidade de valores acima da media: %d\n", acimaMedia);

    return 0;
}
