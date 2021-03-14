#include<stdio.h>
#include<stdlib.h>
#defina media 6
#define rep 4

/*Este programa calcula a média ponderada de notas e mostra o resultado*/
/*A média é 6*/
/*reprovado <4*/

int main(){
	
	float AV1, AV2, M;
	
	printf("\nQual a sua nota na AV1? R: ");
	scanf("%f", &AV1);
	printf("\nQual a sua nota na AV2? R:");
	scanf("%f", &AV2);
	
	M = (AV1 + AV2)/2;
	
	printf("\n\nNota AV1 = %20.2f.", AV1);
	printf("\nNota AV2 = %20.2f.", AV2);
	printf("\nMedia = %23.2f.", M);
	
	if (M >= media){
		printf("\n\nAluno aprovado!!!");
	}else if (M >= rep && M < media){
		printf("\n\nO aluno precisará fazer a AV3.");
	}else{
		printf("\n\nO aluno está reprovado.");
	}
	
	return 0;
	
}