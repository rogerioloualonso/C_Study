#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*Este programa tenta adivinhar um número de 1 à 1000*/

int main(void) {
  
int num, cont = 0, sup = 1001, inf = 0;
char saida, rampa;

do{
  
  do{
  srand( time(NULL) );
  num = rand()%1000;
  }while((num < inf)||(num > sup));

  printf("\n\nSeria o numero %d?", num);
  printf("\nDigite 's' para sim e 'n' para não:");
  scanf(" %c", &saida);

  if((saida != 's')&&(saida != 'n')){
   printf("\nOpção inválida.");
   return 0;
  }

  if(saida == 's'){
    break;
  }else if (saida == 'n'){

  printf("\nSe o valor for maior digite 'a' e se for menor digite 'b': ");
  scanf(" %c", &rampa);

  switch(rampa){
    case 'a': 
      inf = num;
      break;
    case 'b':
      sup = num;
      break;
    default: 
      printf("\n\nOpção inválida.");
      return 0;
   }
  }
  cont++;
}while(saida != 's');

printf("\n\nO seu número é %d.", num);



return 0;
}