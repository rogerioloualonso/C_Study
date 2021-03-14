#include <stdio.h>


/*Calcula a raiz quadrada aproximada*/

int main(void) {

  int num, soma = 0, cont = 1, resultado = 0;

  printf("Digite um número inteiro positivo para darmos a raiz quadrada aproximada:");
  scanf("%d", &num);

  do{

    resultado++;

    soma += cont;
    cont += 2;

    if(soma > num){
      resultado--;
    }


  }while((soma != num)&&(soma < num));

  printf("\n\n\nA raiz quadrada de %d é %d.", num, resultado);
  

  return 0;
}