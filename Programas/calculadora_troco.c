#include<stdio.h>

/*Este programa Descobre quais notas dar de troco com o menor número possível de notas*/
/*Somente valores inteiros*/

int main(){
	
	int R, cem, cinq, dez, cinco, um, valor;
	
	
	printf("\nDigite o valor da quantia:");
	scanf("%d", &R);
	
	cem = R/100;
	valor = R - (cem * 100);
	cinq = valor/50;
	valor = valor - (cinq * 50);
	dez = valor/10;
	valor = valor - (dez * 10);
	cinco = valor/5;
	valor = valor - (cinco * 5);
	um = valor;
	
	printf("\n%.1d Notas de R$100,00.", cem);
	printf("\n%.1d Notas de R$50,00.", cinq);
	printf("\n%.1d Notas de R$10,00.", dez);
	printf("\n%.1d Notas de R$5,00.", cinco);
	printf("\n%.1d Notas de R$1,00.", um);
	
	
	
	return 0;
}