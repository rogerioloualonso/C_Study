#include<stdio.h>


/*Escreva uma função que determina se três valores inteiros fornecidos
como parâmetros representam medidas de um triângulo retângulo. Suponha que
os parâmetros são fornecidos em ordem decrescente.*/

int triangulo(float hipo, float lado1, float lado2){
  if((hipo * hipo) == ((lado1 * lado1) + (lado2 * lado2))){
    printf("\n\nEste triÂngulo é um triÂngulo retÂngulo.");
  }else{
    printf("\n\nEste triÂngulo não é um triÂngulo retÂngulo.");
  }
  return 0;
}

int main(void){

  float lado1, lado2, lado3;

  printf("Digite as medidas dos lados do triângulo na ordem crescente");

  printf("\n\nLado 1:");
  scanf("%f", &lado1);
  printf("\n\nLado 2:");
  scanf("%f", &lado2);
  printf("\n\nLado 3:");
  scanf("%f", &lado3);

  triangulo(lado1, lado2, lado3);


  return 0;
}