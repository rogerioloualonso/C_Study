#include <stdio.h>
#define dias 30

/*Este programa calcula a média de temperatura doo mês*/
/*Assume-se que o mês tem 30 dias*/

int main(void) {
  
 float temp, soma = 0, media;
 int cont;
 
 
 for(int i = 1; i <= dias; i++){
   
   printf("\nDigite a temperatura do dia %d:", i);
   scanf("%f", &temp);
   
   soma += temp;
   
  }
  
  media = soma/dias;
  
  printf("\n\nA média de temperatura foi de %f °C.", media);
 
  return 0;
}