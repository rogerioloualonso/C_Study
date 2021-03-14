#include<stdio.h>
#include<stdlib.h>

/*Este programa transforma segundos em hora*/

int main (){
	
	int t, s, h, m;

	
	printf("Qual a quantidade de segundos?");
	scanf("%d", &t);
	
	s = t % 60;
	m = ((t-s)/60)%60;
	h = (((t-s)/60)-m)/60;
	
	printf("%d segundos são %d horas e %d minutos e %d segundos", t, h, m, s);
	
	return 0;
}