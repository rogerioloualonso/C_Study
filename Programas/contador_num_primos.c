#include <stdio.h>

/*Este programa diz quantos números inteiros positivos tem entre dois numeros*/

int main(void) {

  int num1, num2, maior, menor,inicial;
  int cont, i, total = 0;

  printf("Digite um número inteiro positivo:");
  scanf("%d", &num1);
  printf("Digite um número inteiro positivo:");
  scanf("%d", &num2);

  if(num1 > num2){
    maior = num1;
    menor = num2;
  }else if(num1 < num2){
    maior = num2;
    menor = num1;
  }else{
    printf("\n\nOs números são iguais.");
    return 0;
  }

   inicial = menor + 1;

  do{

    i = 0;
    cont = 0;

    do{
      i++;
      if(inicial % i == 0){
        cont++;
      }
    }while(i != inicial);

    if (cont < 3){
      total++;
    }

    inicial++;

  }while(inicial != maior);

  printf("\n\n\nTemos %d números primos entre %d e %d.", total, menor, maior);

return 0;
}