#include<stdio.h>
#define TAM1 30
# define TAM2 30

/*soma as linhas e colunas de uma matriz*/


int main(void){

  int M[TAM1][TAM2], COL[TAM2], LIN[TAM1], cont = 0;


  for(int i = 0; i < TAM1; i++){
    for(int k = 0; k < TAM2; k++){
      printf("\nDigite o valor de M[%d][%d]:", i, k);
      scanf("%d", &M[i][k]);
    }
  }

  printf("\n\n");

  for(int i = 0; i < TAM1; i++){
  for(int k = 0; k < TAM2; k++){
    printf("%d\t", M[i][k]);
    }
  printf("\n");
  }

  for(int i = 0; i < TAM1; i++){
    LIN[cont] = 0;
    for(int k = 0; k < TAM2; k++){
      LIN[cont] += M[i][k];
    }
    printf("\nLIN[%d] = %d\n", i, LIN[i]);
    cont++;
  }

  cont = 0;

  for(int i = 0; i < TAM1; i++){
    COL[cont] = 0;
    for(int k = 0; k < TAM2; k++){
      COL[cont] += M[k][i];
    }
    printf("\nCOL[%d] = %d\n", i, COL[i]);
    cont++;
  }
  return 0;
}