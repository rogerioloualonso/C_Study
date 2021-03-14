
/*Escreva uma função omega(n:integer):integer que retorne a soma dos
divisores de n exceto ele próprio. Exemplo: omega(15) = 1+3+5 = 9
Usando a função omega solicitada acima, escreva um programa que imprima
todos os números primos entre 2 e 10000.*/

int omega(int num){

  int somadivisores = 0;

  for(int i = 1; i < num; i++){
    if(num % i == 0){
      somadivisores += i;
    }
  }

  return somadivisores;
}
