#include<stdio.h>

/*Este programa calcula a quantidade de combustivel gasto por um carro*/

int main (){
	
	
	int K, KL, V;
	
	printf("\nDigite o consumo(Km/L) do carro:");
	scanf("%d", &KL);
	
	printf("\nDigite a quantidade de Km rodados:");
	scanf("%d", &K);
	
	V = KL * K;
	
	printf("\nForam gastos %d L de combustível.", V);
	
	
	return 0;
}