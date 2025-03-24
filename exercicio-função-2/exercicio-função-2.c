#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double maiorValor(double x, double y) {
    return (x + y + fabs(x - y)) / 2;
}

int main() {
    double x, y;

    printf("2 - Digite dois valores separados por espaco (X e Y): ");
    scanf("%lf %lf", &x, &y);

    printf("O maior valor eh: %.2f\n", maiorValor(x, y));

    return 0;
}
