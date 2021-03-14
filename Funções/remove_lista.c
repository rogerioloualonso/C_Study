void remove_lista(int* vet, int tam, int num){

  for(int i = 0; i < tam; i++){

    if(vet[i] == num){
      for(int j = i; j < tam; j++){
        vet[j] = vet[j + 1];
      }
      vet[tam - 1] = 0;
    }

  }


}