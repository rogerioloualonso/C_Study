
/*Faça uma função que receba um valor inteiro e positivo, calcule e
retorne o seu fatorial. Construa um programa que utilize essa função.*/

int fatorial(int num){

  int total = 1;

  for(int i = num; i > 0; i--){
    total *= i;
  }

  return total;
}

