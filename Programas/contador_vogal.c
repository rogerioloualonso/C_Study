#include <stdio.h>
#include <string.h>
#define gets(a) fgets(a,sizeof(a),stdin);  a[strcspn(a, "\n")] = '\0';
#define TAM 30

/*Conta quantas voais tem na string*/

int main(void) {
  
  char palavra[TAM];
  int tam, vogal = 0;

  printf("Digite uma palavra:");
  gets(palavra);

  tam = strlen(palavra);

  for(int i = 0; i < tam; i++){
    if((palavra[i] == 'a')||(palavra[i] == 'e')||(palavra[i] == 'i')||(palavra[i] == 'o')||(palavra[i] == 'u')){
      vogal++;
    }else if((palavra[i] == 'A')||(palavra[i] == 'E')||(palavra[i] == 'I')||(palavra[i] == 'O')||(palavra[i] == 'U')){
      vogal++;
    }
  }

  printf("\n\nA palavra tem %d vogais.", vogal);



  return 0;
}