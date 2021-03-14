#include<stdio.h>
#define LIN 4
#define COL 4

/*mostra a soma da diagonal principal e dos números acima e abaixo*/


int main(void){

float m[LIN][COL], soma1, soma2, maior = 0;



for(int i = 0; i < LIN; i++){
  for(int j = 0; j < COL; j++){
    printf("m[%d][%d]:", i, j);
    scanf("%f", &m[i][j]);
  }
}

for(int i = 0; i < LIN; i++){
  for(int j = 0; j < COL; j++){

    if(i > j){
      soma1 += m[i][j];
    }else if(i < j){
      soma2 += m[i][j];
    }else{
      if(m[i][j] > maior){
        maior = m[i][j];
      }
    }
  }
}

printf("\n\nA soma dos números acima da diagonal principal é %.2f.", soma1);

printf("\nA soma dos números abaixo da diagonal principal é %.2f.", soma2);

printf("\nO maior número da diagonal principal é %.2f.", maior);

  return 0;
}