#include<stdio.h>

int main(){
   int numero, soma = 0, contador = 0;
   float media;

   printf("Digite um valor: ");
   scanf("%d", &numero);

   while (numero != 0) {
      contador = contador + 1;

      soma = soma + numero;

      printf("Digite proximo valor: \n Ou digite 0 para terminar e calcular.");
      scanf("%d", &numero);
   }

      media = soma / contador;

      printf("Soma:%d\n", soma);
      printf("Media:%.2f\n", media);
      printf("Quantos numeros foram colocados:%d", contador);

      return 0;
}

