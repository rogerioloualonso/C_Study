#include <stdio.h>
#include <string.h>
#define gets(a) fgets(a,sizeof(a),stdin);  a[strcspn(a, "\n")] = '\0';
#define TAM 30

/*Este programa conta quantas letras tem um nome*/

int main(void) {
  
  char nome[TAM];
  int i = 0, continua = 0, num = 0;

  printf("Digite o nome:");
  gets(nome);

  do{

    if((nome[i] >= 'A')&&(nome[i] <= 'Z')){
      i++;
      num++;
    }else if((nome[i] >= 'a')&&(nome[i] <= 'z')){
      i++;
      num++;
    }else{
      continua = 1;
    }
  }while( continua == 0);

  printf("\n\nO nome tem %d letras.", num);

  return 0;
}