

/*Realiza a busca de valor em um vetor qualquer*/
int buscaSeq1(int *vet, int valor, int N){
 
  for(int i = 0; i< N; i++){
    if (valor== vet[i]){
      return i;
 
    }
  }

return -1;
}

/*Realiza a busca de valor em um vetor qualquer*/

int buscaSeq2 (int *vet, int valor, int tam){
  int pos = -1;
  for(int i = 0; i< tam; i++){
    if (valor == vet[i]){
      pos = i;
    }
  }
  
return(pos);
}

/*Realiza a busca em um vetor ordenado*/

int buscaOrd1(int *vet, int valor, int tam){
  for(int i = 0; i< tam; i++){
    if (valor == vet[i]){
      return i;
    }else{
      if (vet[i] > valor){
        return (-1);
      }
    }
    }


  return -1;
}

/*Realiza a busca em um vetor ordenado*/

int buscaOrd2 (int *vet, int valor){
  //Não precisa usar o tam
  int pos = 0;
  
  while (valor >= vet[pos]){

    //Tem que ser >= e o pos++ no final para avaliar a primeira posição.

    if (valor == vet[pos]){
      return(pos);
    }
    pos++;
  }
return(-1);
}
