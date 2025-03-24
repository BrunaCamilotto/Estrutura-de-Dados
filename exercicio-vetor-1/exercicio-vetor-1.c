#include <stdio.h>

int main() {
    float notas[4], soma = 0, media;
    int i;

    for (i = 0; i < 4; i++) {
        printf("1 - Digite a nota numero %d : ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 4;
    printf("\nMedia das notas: %.2f\n", media);

    printf("Notas acima da media:\n");
    for (i = 0; i < 4; i++) {
        if (notas[i] > media) {
            printf("%.2f\n", notas[i]);
        }
    }

    return 0;
}

