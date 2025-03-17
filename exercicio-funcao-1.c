#include<stdio.h>
#include<math.h>


float calculo_volume(float raio){
   float volume;

   volume = pow(raio, 3) * (M_PI * 4.0/3);

   return volume;
}


int main(){
   float diametro;
   float raio;

   printf("informe um valor para o diametro da bola(raio x 2): ");
   scanf("%f", &diametro);

   raio = diametro / 2.0;

   float resultado = calculo_volume(raio);

   printf("\nO volume eh %f:", resultado);

   return 0;
}
