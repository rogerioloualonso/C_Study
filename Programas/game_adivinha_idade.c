#include <stdio.h>

/*Este programa serve para vocé adivinhar quando que Zé será maior do que Chico. Chico tem 1,50 m e cresce a 2 cm por ano e Zé tem 1,10 m e cresce 3 cm por ano. Insira uma previsão em anos para adivinhar quando que Zé será maior que Chico.*/

int main(void) {
  
  int chute, id1, id2;
  
  
  printf("Este programa serve para vocé adivinhar quando que Zé será maior do que Chico. Chico tem 1,50 m e cresce a 2 cm por ano e Zé tem 1,10 m e cresce 3 cm por ano. Insira uma previsão em anos para adivinhar quando que Zé será maior que Chico.");
  
  do{
    
    printf("\n\nDigite um ano:");
    scanf("%d", &chute);
    
    if(chute<0){
      printf("\n\nValor inválido.");
      return 0;
    }
    
    id1 = 150 + (2*chute);
    id2 = 110 + (3*chute);
    
    if(id2 > id1){
      if(chute > 41){
        printf("\nVocê pode chegar mais peto do ano em que ele ultrapasou Chico, continue tentando.");
      }if(chute == 41){
        printf("\nVocê acertou o ano em que Zé ultrapassou Chico!!!");
        return 0;
      }
    }else if (id2 <= id1){
      printf("\nVocê errou!Continue tentando...");
    }
  
  }while((chute > 0)&&(chute != 41));
    
    
  
  
  return 0;
}