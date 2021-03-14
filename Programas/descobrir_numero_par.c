#include<stdio.h>
#include<stdlib.h>

/*Este programa descobre se o número é par*/

int main (){
	
	int a;
	
	printf("\n\nDigite um número:\n");
	scanf("%d", &a);
	
	if(a%2==0){
		printf("\nO número é par.");
	}else{
		printf("O número é ímpar.\n");
	}
	
	return 0;
	
}



