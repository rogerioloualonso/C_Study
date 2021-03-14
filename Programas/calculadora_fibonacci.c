#include <stdio.h>

/*calculadora de Fibonacci*/


int main(void) {

int num, anterior = 1, posterior = 1, Fn;

printf("Iremos calcular o número de Fibonacci!");
printf("\nDigite um número inteiro maior que 2:");
scanf("%d", &num);

num -= 2;

for(int i = 0; i < num; i++){
	
	Fn = anterior + posterior;
	anterior = posterior;
	posterior = Fn;
	
}

printf("\n\nO número de Fibonacci %d é %d.", num + 2, Fn);
  
return 0;
}