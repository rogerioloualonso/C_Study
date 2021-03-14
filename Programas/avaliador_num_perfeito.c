#include <stdio.h>

/*Este programa diz se o número é perfeito*/


int main(void) {

	int num, i = 0, k = 1, soma = 0;

	printf("Digite um número inteiro não negativo:");
	scanf("%d", &num);
	
	do{
	  
	  if(num % k == 0){
	    soma += k;
	  }
	  
	  k++;
	  
	}while(k != num);
	
	if(soma == num){
	  printf("\n\nO número %d é perfeito.", num);
	}else{
	  printf("\n\nO número %d não é perfeito.", num);
	}
  
return 0;
}