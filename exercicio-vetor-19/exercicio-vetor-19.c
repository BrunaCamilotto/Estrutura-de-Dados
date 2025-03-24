#include <stdio.h>
#define MAX 100

int main() {
    int lista[MAX], contador[10] = {0};
    int num, count = 0;

    printf("19 - Digite valores entre 0 e 9 (valor fora desse intervalo para encerrar):\n");
    while(scanf("%d", &num) == 1 && (num >= 0 && num <= 9)) {
        if(count < MAX) {
            lista[count++] = num;
            contador[num]++;
        }
    }

    int maxValor = 0, maxOcorrencias = contador[0];
    for(int i = 1; i < 10; i++) {
        if(contador[i] > maxOcorrencias) {
            maxOcorrencias = contador[i];
            maxValor = i;
        }
    }

    printf("O valor que apareceu mais vezes foi %d e apareceu %d vezes.\n", maxValor, maxOcorrencias);

    return 0;
}

