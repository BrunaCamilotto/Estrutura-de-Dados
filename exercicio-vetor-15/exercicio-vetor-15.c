#include <stdio.h>
#define MAX 20

typedef struct {
    int idade;
    char sexo;
} Pessoa;

int main() {
    Pessoa pessoas[MAX];
    int n, i, contHomens = 0, contMulheres = 0;
    float somaHomens = 0, somaMulheres = 0;

    printf("15 - Quantas pessoas? ");
    scanf("%d", &n);
    if(n > MAX) n = MAX;

    for(i = 0; i < n; i++) {
        printf("15 - Pessoa %d - Idade: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("15 - Pessoa %d - Sexo (M/F): ", i + 1);
        scanf(" %c", &pessoas[i].sexo);

        if(pessoas[i].sexo == 'M' || pessoas[i].sexo == 'm') {
            somaHomens += pessoas[i].idade;
            contHomens++;
        } else if(pessoas[i].sexo == 'F' || pessoas[i].sexo == 'f') {
            somaMulheres += pessoas[i].idade;
            contMulheres++;
        }
    }

    if(contHomens > 0)
        printf("Media de idade dos homens: %.2f\n", somaHomens / contHomens);
    else
        printf("Nenhum homem informado.\n");

    if(contMulheres > 0)
        printf("Media de idade das mulheres: %.2f\n", somaMulheres / contMulheres);
    else
        printf("Nenhuma mulher informada.\n");

    return 0;
}

