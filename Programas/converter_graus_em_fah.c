#include<stdio.h>
#include<stdlib.h>

/*Este programa converte a temperatura de graus para Fahrenheit*/

int main (){
	
	float gra, fah;
	
	printf("\nQual a temperatura em graus?");
	scanf("%f", &gra);
	
	fah = (9 * gra + 160)/5;
	
	printf("\n\n A tenperatura em Fahrenheit é de %.2f", fah);
	
	return 0;
}