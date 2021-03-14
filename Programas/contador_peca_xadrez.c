#include<stdio.h>
#define TAM 8

/*Conta as peças de um jogo de xadrez*/


int main(void){

  int TAB[TAM][TAM], contpeao = 0, conttorre = 0, contrei = 0, contbispo = 0, contrainha = 0, contcavalo = 0, contvago = 0;


  printf("Contador de peça do Xadrez\n");
  printf("\n\n1 - Peão");
  printf("\n\n2 - Torre");
  printf("\n\n3 - Rei");
  printf("\n\n4 - Bispo");
  printf("\n\n5 - Rainha");
  printf("\n\n6 - Cavalo");
  printf("\n\n7 - Vago\n\n");

  for(int i = 0; i < TAM; i++){
    for(int k = 0; k < TAM; k ++){
      printf("\nDigite a peça da posição [%d][%d]:", i, k);
      scanf("%d", &TAB[i][k]);

      if(TAB[i][k] == 1){
        contpeao++;
      }else if(TAB[i][k] == 2){
        conttorre++;
      }else if(TAB[i][k] == 3){
        contrei++;
      }else if(TAB[i][k] == 4){
        contbispo++;
      }else if(TAB[i][k] == 5){
        contrainha++;
      }else if(TAB[i][k] == 6){
        contcavalo++;
      }else if(TAB[i][k] == 7){
        contvago++;
      }else{
        printf("\n\nValor inválido.");
        return 0;
      }
    }
  }

  printf("\n\n\nExistem %d peão/peões.", contpeao);
  printf("\nExistem %d torres(s).", conttorre);
  printf("\nExistem %d rei(s).", contrei);
  printf("\nExistem %d bispo(s).", contbispo);
  printf("\nExistem %d rainha(s).", contrainha);
  printf("\nExistem %d cavalos(s).", contcavalo);
  printf("\nExistem %d espaços vago(s).", contvago);

  


  return 0;
}