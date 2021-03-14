#include <stdio.h>

/*Este programa calcula o fatorial*/

int main(void) {

  int num, resultado ;

  printf("Digite um número inteiro positivo:");
  scanf("%d", &num);


  resultado = num;

  for(int i = (num - 1); i > 0; i--){
    resultado*= i;
  }

   printf("\n\n\nO fatorial de %d é %d.", num, resultado);


return 0;
}