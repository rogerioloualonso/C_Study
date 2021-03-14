void insere_lista(int* vet, int tam, int lim, int num){

  /*lim é o tamanho máximo da lista*/
  /*num é o número a ser inserido*/

  int indice, aux, temp;

  if(tam < lim){
    for(int i = 0; i < lim; i++){

      if(vet[i] == num){
        printf("\nO número já está na lista.\n");
        break;
      }else if(vet[i] > num){

        int quant = tam;

        for(int j = i; j < tam; j++){
          vet[quant] = vet[quant - 1];
          quant--;
        }
        vet[i] = num;
        break;

      }else if(i == (tam -1)){
        vet[tam] = num;
        break;
      }
    }
  }else{
    printf("\nA lista está cheia.");
  }

}