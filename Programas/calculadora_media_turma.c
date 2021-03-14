#include<stdio.h>
#include<stdlib.h>

/*Este programa calcula a média de notas de uma turma*/

int main(){
	
	int q, i;
	int soma = 0;
	float nota = 0, media;
	
	printf("\n\nQual a quantidade de alunos da turma?");
	scanf("%d", &q);
	
	for(i = 1; i <= q; i++){
		
		printf("\nDigite a nota do %d aluno:", i);
		scanf("%f", &nota);
		soma = soma + nota;
	}
	
	media = soma / q;
	printf("\n\n A média da turma é %.2f.", media);
}