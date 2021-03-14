#include<stdio.h>
#define TAM 2

/*Confere o jogo de loteria*/


int main(void){

  int RESUL[TAM], APOSTA[TAM], cont = 0;

  printf("Digite os resultados");

  for(int i = 0; i < TAM; i++){
    printf("\nDigite o resultado %d:", i + 1);
    scanf("%d", &RESUL[i]);
  }

  printf("\n\nDigite o jogo feito");

  for(int i = 0; i < TAM; i++){
    printf("\nDigite o valor %d:", i + 1);
    scanf("%d", &APOSTA[i]);
  }

  for(int i = 0; i < TAM; i ++){
    if(RESUL[i] == APOSTA[i]){
      cont++;
    }
  }

  printf("\n\nO jogo  feito teve %d acertos.", cont);
  if(cont == TAM){
    printf("\nO jogo feito foi campeão!!!");
  }



  return 0;
}