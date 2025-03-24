#include <stdio.h>
#define MAX 100

int main() {
    int lista_valida[MAX], lista_invalida[MAX];
    int count_valida = 0, count_invalida = 0, num;

    printf("14 - Digite valores entre 3 e 7 (0 para encerrar):\n");
    scanf("%d", &num);
    while (num != 0) {
        if (num >= 3 && num <= 7) {
            lista_valida[count_valida++] = num;
            printf("Ok\n");
        } else {
            lista_invalida[count_invalida++] = num;
            printf("Valor invalido. Digite um valor entre 3 e 7.\n");
        }
        scanf("%d", &num);
    }

    printf("\nValores validos:\n");
    for (int i = 0; i < count_valida; i++) {
        printf("%d ", lista_valida[i]);
    }
    printf("\nValores invalidos:\n");
    for (int i = 0; i < count_invalida; i++) {
        printf("%d ", lista_invalida[i]);
    }
    printf("\n");

    return 0;
}
