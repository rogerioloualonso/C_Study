#include<stdio.h>

/*Este programa mostra o seu peso nos outros planetas*/


int main(){
	
	float peso, mer, v, marte, lua, j, s, u, n, p;
	
	printf("\nQual o seu peso?");
	scanf("%f", &peso);
	
	peso *= 10;
	
	
	mer = peso * 0.3649337410;
	v = peso * 0.9041794087;
	marte = peso * 0.3812436289;
	lua = peso * 0.1651376146;
	j = peso * 2.6513761467;
	s = peso * 1.1386340468;
	u = peso * 1.0693170234;
	n = peso * 1.3506625891;
	p = peso * 0.2252803261;
	
	printf("\nO seu peso en Mercúrio seria %f.", mer);
	printf("\nO seu peso en Vênus seria %f.", v);
	printf("\nO seu peso en Marte seria %f.", marte);
	printf("\nO seu peso na terra é %f.", peso);
	printf("\nO seu peso na lua seria %f.", lua);
	printf("\nO seu peso en Júpiter seria %f.", j);
	printf("\nO seu peso en Saturno seria %f.", s);
	printf("\nO seu peso en Urano seria %f.", u);
	printf("\nO seu peso en Netuno seria %f.", n);
	printf("\nO seu peso en Plutão seria %f.", p);
	
	return 0;
}