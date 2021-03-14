#include <stdio.h>
#include<stdlib.h>
#include<time.h>

/*Este programa gera contas aleatória de somar com números entre 0 e 100*/


int main (){
	
	int a, b, c, d, e, f, g, h,i ,j , r1, r2, r3, r4, r5, cont =0;
	

	srand( time(NULL) );
  a = rand()%100;
  b = rand()%100;
	
  printf("\n\n%d + %d =", a, b);
  scanf("%d", &r1);
  if(r1 == a + b){
    cont++;
  }

  
	srand( time(NULL) );
  c = rand()%100;
  d = rand()%100;
  printf("\n\n%d + %d =", c, d);
  scanf("%d", &r2);
  if(r2 == c + d){
    cont++;
  }

  srand( time(NULL) );
  e = rand()%100;
  f = rand()%100;
  printf("\n\n%d + %d =", e, f);
  scanf("%d", &r3);
  if(r3 == e + f){
    cont++;
  }

  srand( time(NULL) );
  g = rand()%100;
  h = rand()%100;
  printf("\n\n%d + %d =", g, h);
  scanf("%d", &r4);
  if(r4 == g + h){
    cont++;
  }

  srand( time(NULL) );
  i = rand()%100;
  j = rand()%100;
  printf("\n\n%d + %d =", i, j);
  scanf("%d", &r5);
  if(r5 == i + j){
    cont++;
  }


  printf("\n\n%d + %d = %d, você respondeu %d.", a, b, a+b, r1);
  printf("\n%d + %d = %d, você respondeu %d.", c, d, c+d, r2);
  printf("\n%d + %d = %d, você respondeu %d.", e, f, e+f, r3);
  printf("\n%d + %d = %d, você respondeu %d.", g, h, g+h, r4);
  printf("\n%d + %d = %d, você respondeu %d.", i, j, i+j, r5);
  
  printf("\n\nVocê acertou %d perguntas", cont);

  return 0;
}