#include <stdio.h>

int saoMultiplos(int a, int b) {
    if (a % b == 0 || b % a == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a, b;

    printf("4 - Digite dois valores separados por uma unica barra de espaco: ");
    scanf("%d %d", &a, &b);

    if (saoMultiplos(a, b)) {
        printf("Os numeros sao multiplos.\n");
    } else {
        printf("Os numeros nao sao multiplos.\n");
    }

    return 0;
}
