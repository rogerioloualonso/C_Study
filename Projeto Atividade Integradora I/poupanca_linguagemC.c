#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define gets(a) fgets(a,sizeof(a),stdin);  a[strcspn(a, "\n")] = '\0';
#define TAM 300 

float function_calc(float inicial, int *quant,float total, float *mensal){

  float juntar;

  juntar = total - inicial;

  *mensal = juntar / *quant;

  float auxiliar;

  do{

      auxiliar = inicial;

      for(int i = 0; i < *quant; i++){

       auxiliar *= 1.005;
       auxiliar += *mensal;

     }

     if(auxiliar > total){
       *mensal -= 0.1;
     }

    }while(auxiliar > total);

    *mensal += 0.1;
    //0.1 fica menor (Depende do arredondamento)
    //0.2 fica certo

    return 0;
}



int main(void) {
	
	char opcao1, nome[TAM], apelido[TAM];

	int saida = 0, saida2 = 0, quant, opcao, tamanho;

  float total, inicial = 0, juntar, alcancado, mensal = 0, soma, *valores;

  float *pont_mensal = &mensal;
  int *pont_quant = &quant;

	
/*
  printf("\n\n*****Seja Bem-vindo(a)!*****");
	printf("\n\nVamos fazer o cadastro?");
	
			
	printf("\n\nDigite seu nome completo:");
	gets(nome);

  do{
			
    printf("\n\nDeseja ser chamado por algum apelido?");
	  printf("\nDigite 'S' para sim ou 'N' para não:");
	  scanf(" %c", &opcao1);

  
			
		if((opcao1 == 'S')||(opcao1 == 's')){
			printf("\nDigite o apelido:");
      getchar();
		  gets(apelido);
      saida = 1;
					
					
		}else if((opcao1 == 'N')||(opcao1 == 'n')){
      saida = 1;
		}else{
			printf("\nOpção inválida.");
		}
  }while(saida == 0);

  saida = 0;

  printf("\n\n\nCadastro realizado com sucesso!!!");

  if((opcao1 == 's')||(opcao1 == 'S')){
    printf("\n\n\n\n**********Seja bem-vindo(a) %s! **********", apelido);
  }else{
    printf("\n\n\n\n**********Seja bem-vindo(a) %s! **********", nome);
  }
  printf("\nVamos começar a poupar dinheiro!?");
*/
  printf("\n\n\n\nO quanto que deseja poupar? R$ ");
  scanf("%f", &total);

  printf("\nQual o valor inicial? R$");
  scanf("%f", &inicial);

  printf("\nQuantos meses temos para nos planejar?");
  scanf("%d", &quant);

  valores = (float *) malloc(quant * sizeof(float));

  
  tamanho = quant;

  do{

    printf("\n\n\n\nQual modo prefere poupar?");
    printf("\n1 - Guardar o valor de forma pessoal.");
    printf("\n2 - Poupança da caixa.");
    printf("\n\nResposta:");
    scanf("%d", &opcao);

    if((opcao == 1)||(opcao == 2)){
      saida2 = 1;
    }else{
      printf("\n\nOpção incorreta.");
    }

  }while(saida2 == 0);


	switch(opcao){

    case 1: 

      mensal = (total - inicial)/quant;

      if((opcao1 == 's')||(opcao1 == 'S')){
      printf("\n\n\n\n%s, você deverá guardar um valor mensal de R$ %.2f.", apelido, mensal);
    }else{
      printf("\n\n\n\n%s, você deverá guardar um valor mensal de R$ %.2f.", nome, mensal);
    }
    break;

    case 2:function_calc(inicial, pont_quant, total, pont_mensal);

    if((opcao1 == 's')||(opcao1 == 'S')){
      printf("\n\n\n\n%s, você deverá guardar um valor mensal de R$ %.2f.", apelido, mensal);
    }else{
      printf("\n\n\n\n%s, você deverá guardar um valor mensal de R$ %.2f.", nome, mensal);
    }

    default:
      break;

  }

  int mes = 0, atualizacao = 0;

  if(opcao == 1){

    do{

      printf("\n\n\n***Chegamos ao final do %dº mês!!!***", mes + 1);
      printf("\nQuanto poupou?");
      scanf("%f", &valores[mes]);

      quant--;
      total -= valores[mes];

      if(valores[mes] < mensal){
       printf("\nQue pena!\nVocê guardou menos que o necessário.");
       atualizacao = 1;
      }else if (valores[mes] == mensal){
       printf("\nParabéns!!! Você guardou o necessário!!");
      }else{
       printf("\nUaaaaau, você guardor mais que o necessário!!");
       atualizacao = 1;
      }

      if(quant == 0){
        saida = 1;
        atualizacao = 0;
        printf("\nAcabou o nosso prazo!");

     }
     
     while(atualizacao == 1){

       mensal = (total - inicial)/quant;
      
      if((opcao1 == 's')||(opcao1 == 'S')){
        printf("\n%s, Agora você deverá guardar um valor mensal de R$ %.2f.", apelido, mensal);
      }else{
        printf("\n%s, Agora você deverá guardar um   valor mensal de R$ %.2f.", nome, mensal);
      }
      atualizacao = 0;
    }

    mes++;
  
   }while(saida == 0);
  
  }else{

    float acumulado = inicial;
    float *pont_acumulado = &acumulado;

    do{

      printf("\n\n\n***Chegamos ao final do %dº mês!!!***", mes + 1);
      printf("\nQuanto poupou?");
      scanf("%f", &valores[mes]);

      acumulado += valores[mes];
      quant--;

      if(valores[mes] < mensal){
       printf("\nQue pena!\nVocê guardou menos que o necessário.");
       atualizacao = 1;
      }else if (valores[mes] == mensal){
       printf("\nParabéns!!! Você guardou o necessário!!");
      }else{
       printf("\nUaaaaau, você guardor mais que o necessário!!");
       atualizacao = 1;
      }

      if(quant == 0){
        saida = 1;
        atualizacao = 0;
        printf("\nAcabou o nosso prazo!");
     }


     while(atualizacao == 1){

      function_calc(acumulado, pont_quant, total, pont_mensal);


      if((opcao1 == 's')||(opcao1 == 'S')){
        printf("\n%s, Agora você deverá guardar um valor mensal de R$ %.2f.", apelido, mensal);
      }else{
        printf("\n%s, Agora você deverá guardar um   valor mensal de R$ %.2f.", nome, mensal);
      }
      atualizacao = 0;
    }

    mes++;
  
   }while(saida == 0);

  printf("\n\n\n\n\n*****Resumos dos valores guardados*****\n\n");

  for(int i = 0; i < tamanho; i ++){
    printf("%dº mês: R$ %.2f\n", i + 1, valores[i]);
    soma += valores[i];
  }
  printf("\nTotal: R$ %.2f", soma + inicial);

  printf("\n\n\n\n\nVocê chegou ao fim de nosso programa. Agradecemos o seu precioso tempo em testar. Até o próximo 'Run'!");

  }

  return 0;
}
