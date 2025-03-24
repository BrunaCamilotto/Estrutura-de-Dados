#include <stdio.h>

int contarDivisores(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int ehPrimo(int n) {
    return contarDivisores(n) == 2 ? 1 : 0;
}

int main() {
    int numero;

    printf("9 - Digite um numero: ");
    scanf("%d", &numero);

    printf("O numero %d tem %d divisores.\n", numero, contarDivisores(numero));

    if (ehPrimo(numero)) {
        printf("O numero %d eh primo.\n", numero);
    } else {
        printf("O numero %d nao eh primo.\n", numero);
    }

    return 0;
}
