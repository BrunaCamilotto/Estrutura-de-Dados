#include <stdio.h>

int calcularFatorial(int n) {
    int fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O fatorial de %d eh %d\n", numero, calcularFatorial(numero));

    return 0;
}

