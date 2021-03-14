#include<stdio.h>


/*Elabore uma função que receba 2 números inteiros a e b e um caracter
c. A função deve imprimir uma "moldura" de tamanho a x b, feita usando um
caracter c e devolver o número de caracteres impressos. O programa deve
executar a função e imprimir seu valor de retorno.*/

int moldura(int comp, int alt, char letra){

  int quant = 0;

  for(int i = 0; i < alt; i++){
    if((i == 00)||(i == (alt - 1))){
      for(int imp = 0; imp < comp; imp++){
        printf("%c", letra);
        quant++;
      }
      printf("\n");
    }else{
        for(int imp = 0; imp < comp; imp++){
          if((imp == 0)||(imp == (comp - 1))){
            printf("%c", letra);
            quant++;
          }else{
            printf(" ");
          }
        }
        printf("\n");
    }
  }
  
return quant;
}


int main(void){

  int num1, num2, quantidade;
  char letra;

  printf("Digite o comprimento da moldura:");
  scanf("%d", &num1);
  printf("\nDigite a altura da moldura:");
  scanf("%d", &num2);
  printf("\nDigite a letra da moldura:");
  scanf(" %c", &letra);

  quantidade = moldura(num1, num2, letra);

  printf("\n\n\n\nForam impressos %d letras.", quantidade);
  
 
  return 0;
}