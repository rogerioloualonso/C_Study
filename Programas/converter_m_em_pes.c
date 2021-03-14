#include<stdio.h>
#include<stdlib.h>

/*Este programa transforma uma medida de metros para pés*/

int main(){
	
	float m, p;
	
	printf("\nQual o valor em metros?");
	scanf("%f", &m);
	
	p = m * 3.28084;
	
	printf("O valor em pés é de %.5f\n\n", p);
	
	return 0;
}