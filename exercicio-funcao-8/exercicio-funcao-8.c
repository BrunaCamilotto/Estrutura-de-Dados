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

int main() {
    int numero;

    printf("8 - Digite um numero: ");
    scanf("%d", &numero);

    printf("O numero %d tem %d divisores.\n", numero, contarDivisores(numero));

    return 0;
}

