#include <stdio.h>

/*Este programa simula um caixa de estacionamento*/

int main(void) {
  
  int hchegada, minchegada, hsaida, minsaida, h, min;
  float valor;

  printf("\nDigite o horário de chegada com a hora no formato de 24 h e as horas separadas do minuto por um espaço.\nEx: 12 50 (12:50 h)\nDigite:");
  scanf("%d %d", &hchegada, &minchegada);

   printf("\nDigite o horário de saída:");
  scanf("%d %d", &hsaida, &minsaida);

  if ((hchegada < 0)||(hchegada >= 24 )){
    printf("\n\nModelo de horário inválido 001.");
    return 0;
  } else if((minchegada < 0)||(minchegada > 59)){
    printf("\n\nModelo de horário inválido 002.");
    return 0;
  }else  if ((hsaida < 0)||(hsaida >= 24 )){
    printf("\n\nModelo de horário inválido 003.");
    return 0;
  }else if((minsaida < 0)||(minsaida > 59)){
    printf("\n\nModelo de horário inválido 004.");
    return 0;
  }else{
    printf("\n\nO modelo de horário de chegada e saída estão corretos.");
  }


  if((hchegada == hsaida)&&(minchegada == minsaida)){
    h = 0;
    min = 0;
  }else if((hchegada == hsaida)&&(minchegada < minsaida)){
    h = 1;
  }else if (hchegada < hsaida){
    h = hsaida - hchegada;
    if(minchegada != 0){
      min = (60 - minchegada) + minsaida;
      if(min > 60){
        h++;
        min = min - 60;
        if(min > 0){
          h++;
        }
      }
    }
    
  }else if (hchegada > hsaida){
    h = (24 - hchegada) + hsaida;
    if(h > 24){
      printf("\n\nLimite de 24 h ultrapassado.");
    }
    min = (60 - minchegada) + minsaida;
    if(min > 60){
      h++;
       min = min - 60;
      if(min > 0){
        h++;
       }
     }
    if((h >= 24)&&(min > 0)){
      printf("\n\nLimite de 24 h ultrapassado.");
    }
  }

if((h <= 2)&&(h > 0)){
  valor = 2;
}else if((h == 3)||(h == 4)){
  valor = 1.4 * h;
}else{
  valor = 5 * h;
}

printf("\n\nO cliente deve pagar R$%.2f.", valor);






  return 0;
}