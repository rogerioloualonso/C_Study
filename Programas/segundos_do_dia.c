#include<stdio.h>

/*Este programa descobre quantos segundos do dia se passaram e quantos minutos faltam para acabar o dia*/


int main(){
	
	int h, min, s, t, f;
	int dia = 86400; /*Segundos que tem em 1 dia*/
	
	printf("\nQuastas horas se passaram?");
	scanf("%d", &h);
	printf("\nQuastos minutos se passaram?");
	scanf("%d", &min);
	printf("\nQuastos segundos se passaram?");
	scanf("%d", &s);
	
	t = (h * 60 * 60) + (min * 60) + s;
	f = dia - t;
	
	printf("\n Já se passaram %d segundos no dia e faltam %d segundos para completar o dia.", t, f);
	
	
	return 0;
}