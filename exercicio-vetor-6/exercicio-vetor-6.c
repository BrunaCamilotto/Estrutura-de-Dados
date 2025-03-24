#include <stdio.h>
#define MAX 100

int main() {
    int lista[MAX], count = 0, num, mul;

    printf("6 - Digite valores (0 para encerrar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        lista[count++] = num;
    }

    printf("6 - Digite um numero para verificar multiplos: ");
    scanf("%d", &mul);

    printf("Multiplos de %d:\n", mul);
    for (int i = 0; i < count; i++) {
        if (lista[i] % mul == 0) {
            printf("%d ", lista[i]);
        }
    }
    printf("\n");

    return 0;
}

