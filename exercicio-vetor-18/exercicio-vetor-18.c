#include <stdio.h>

int main() {
    int contador[5] = {0};
    int valor;

    printf("18 - Digite valores entre 1 e 4 (valor fora desse intervalo para encerrar):\n");
    while (scanf("%d", &valor) == 1 && (valor >= 1 && valor <= 4)) {
        contador[valor]++;
    }

    for (int i = 1; i <= 4; i++) {
        printf("%d apareceu %d vezes\n", i, contador[i]);
    }

    return 0;
}

