#include<stdio.h>
#define TAM1 140
# define TAM2 30

/*Soma todos os valores de uma matriz*/

int main(void){

  int matriz[TAM1][TAM2], soma = 0;

  for(int i = 0; i < TAM1; i++){
    for(int k = 0; k < TAM2; k++){
      printf("\nDigite o valor matriz [%d][%d]:", i, k);
      scanf("%d", &matriz[i][k]);
      soma += matriz[i][k];
    }
  }

  printf("\n\n\n soma de todos os termos da matriz é %d.", soma);

 
  return 0;
}