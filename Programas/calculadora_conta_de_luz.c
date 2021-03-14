#include<stdio.h>
#include<stdlib.h>

/*Este programa calcula o ser pago em uma conta de luz*/


int main(){
 
	float kh, kc, pagar;
	
	printf("\nQual o preço do Kw? R$");
	scanf("%f", &kh);
	
	printf("\nQual a quantidade de Kw consumidos?");
	scanf("%f", &kc);
	
	pagar = kh * kc;
	
	if (pagar <= 21.23){
		
		printf("\nO valor a ser pago é de R$ 21,23");
		
	} else {
		
		printf("\nValor total a ser pago: %.2f.", pagar);
	}
	
	return 0;
}