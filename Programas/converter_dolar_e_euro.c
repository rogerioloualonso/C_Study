#include <stdio.h>
#include<stdlib.h>

/*Este programa converte Real em Dólar e Euros*/


int main (){
	
	float valor, dolar, euro;
	
	printf("\nQUal a cotação do Euro?");
	scanf("%f", &euro);
	
	printf("\nQUal a cotação do Dólar?");
	scanf("%f", &dolar);
	
	printf("\nQual o valor para ser convertido? R$");
	scanf ("%f", &valor);
	
	dolar = valor * dolar;
	euro = valor * euro;
	
	printf ("\n\n O valo em Euros é: %.2f", euro);
	printf("\n O valor em Dólar é: %.2f", dolar);
	
	
	return 0;
}