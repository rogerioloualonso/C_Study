#include <stdio.h>
#include <string.h>
#define gets(a) fgets(a,sizeof(a),stdin);  a[strcspn(a, "\n")] = '\0';
#define TAM 30

/*Este programa inverte um nome*/

int main(void) {
  
  char palavra[TAM], inverso[TAM];
  int tam, x;

  printf("Digite uma palavra:");
  gets(palavra);

  tam = strlen(palavra);
  x = tam - 1;

  for(int i = 0; i < tam; i++){
    inverso[i] = palavra[x];
    x--;
  }

  printf("\n\n%s", inverso);

  return 0;
}