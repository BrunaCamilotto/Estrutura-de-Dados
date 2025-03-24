#include <stdio.h>

double maiorValor(double x, double y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    double x, y;

    printf("3 - Insira dois valores separados por um unico espaco (X e Y): ");
    scanf("%lf %lf", &x, &y);

    printf("O maior valor eh: %.2f\n", maiorValor(x, y));

    return 0;
}

