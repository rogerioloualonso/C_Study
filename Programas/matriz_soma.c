#include <stdio.h>
#define LIN 3
#define COL 3

/*Soma duas matrizes quadradas*/

int main(void) {
  
float m1[LIN][COL], m2[LIN][COL], s[LIN][COL];


for(int i = 0; i < LIN; i++){
  for(int j = 0; j < COL; j++){
    printf("\nm1[%d][%d]:", i, j);
    scanf("%f", &m1[i][j]);
  }
}

printf("\n\n");

for(int i = 0; i < LIN; i++){
  for(int j = 0; j < COL; j++){
    printf("\nm1[%d][%d]:", i, j);
    scanf("%f", &m2[i][j]);
  }
}

for(int i = 0; i < LIN; i++){
  for(int j = 0; j < COL; j++){
    s[i][j] = m1[i][j] + m2 [i][j];
  }
}

printf("\n\nMatriz Resultante\n");

for(int i = 0; i < LIN; i++){
  for(int j = 0; j < COL; j++){
    printf("%.2f\t", s[i][j]);
  }

  printf("\n");
}

  return 0;
}