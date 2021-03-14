#include<stdio.h>
#define LIN 2
#define COL 2

/*Procura um valor na matriz*/

int main(void){

float m1[LIN][COL], num;
int cont = 0;


for(int i = 0; i < LIN; i++){
  for(int j = 0; j < COL; j++){
    printf("\nmatriz[%d][%d]:", i, j);
    scanf("%f", &m1[i][j]);
  }
}

printf("\n\nDigite um número:");
scanf("%f", &num);


for(int i = 0; i < LIN; i++){
  for(int j = 0; j < COL; j++){

    if( num == m1[i][j]){
      printf("\nO número %.2f está na linha %d coluna %d.", num, i, j);
      cont++;
    }
  }
}

if(cont == 0){
  printf("\n\nO número %.2f não foi encontrado.", num);
}


  return 0;
}