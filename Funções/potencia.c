

/*Escreva uma função potenciaInt(base, expoente) que retorne o valor de
baseexpoente. Não use nenhuma das funções da biblioteca matemática.*/


int potencia(float base, float expoente){

  float baseexpoente = base;

  for(int i = expoente; i > 1; i --){
    baseexpoente *= baseexpoente;
  }

  return baseexpoente;
}

