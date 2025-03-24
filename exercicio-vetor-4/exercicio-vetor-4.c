#include <stdio.h>
#define MAX 100

int main() {
    int lista[MAX], count = 0, num;

    printf("4 - Digite valores (0 para encerrar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        lista[count++] = num;
    }

    printf("Lista em ordem inversa:\n");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}


