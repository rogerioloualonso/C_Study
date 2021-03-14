#include<stdio.h>
#include<stdlib.h>

/*Este programa calcula o seu salário com o desconto do INSS*/


int main(){
	
	float sal;
	
	printf("\n\nQual o seu salário?");
	scanf("%f", &sal);
	
	if(sal <= 600){
		printf("\nO seu salário com o desconto do INSS é %f.", sal);
	}else if( sal > 600 && sal <= 1200){
		sal = sal * 0.8;
		printf("\n O seu salário com o desconto do INSS é de %f.", sal);
	}else if (sal > 1200 && sal <= 2000){
		sal = sal * 0.75;
		printf("\nO seu salário com o desconto do INSS é de %f.", sal);
	}else{
		sal = sal * 0.7;
		printf("\nO seu salário com o desconto do INSS é de %.2f.", sal);
	}
	
	return 0;
}