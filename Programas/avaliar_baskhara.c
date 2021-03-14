#include<stdio.h>
#include<stdlib.h>

/*Este program diz se a equação do 2º grau tem solução*/

int main(){
	
	float a, b, c, d;
	
	printf("\n\nDigite os valor de A, B e C da equação:\n");
	scanf("%F", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	if (a == 0 || b == 0 || c == 0){
		printf("\n\nA equação é incompleta.");
	}else{
		printf("\n\nA equação é completa.");
	}
	
	d = (b*b) - 4*a*c;
	
	if (d >= 0){
		printf("\nA equação tem solução.");
	}else{
		printf("\nA equação não tem solução.");
	}
	
	return 0;
}