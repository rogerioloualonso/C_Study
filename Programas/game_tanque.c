#include <stdio.h>

/*Este programa tenta adivinhar em quantas horas qual dos tanques A e B esvaziará primeiro.*/

int main(void) {
  
  int t1, t2, hora;
  
  printf("\n\n Este programa tenta adivinhar em quantas horas qual dos tanques A e B esvaziará primeiro. O tanque A tem 82 litros e esvazia 5.1 litros por hora e enche por meio de uma bica 18 L por hora. e o tanque B tem 37 litros e esvazia 12 L por hora e enche por meio de uma bica 48 L por hora.");
  
  do{
  printf("\n\nDigite um valor para hora:");
  scanf("%d", &hora);
  
  if(hora <= 0){
    printf("\n\nValor inválido.");
    return 0;
  }

  t1 = 82 + (12.9 * hora);
  t2 = 37 + (36 * hora);
  
 if((t1 == 0)||(t2 ==0)){
   printf("\n\nVocê acertou!");
   return 0;
 }else{
   printf("\nVocê errou!Continue tentando...");
 }
  }while((t1 >0)&&(t2 > 0));
  
  
  return 0;
}