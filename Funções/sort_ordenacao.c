
void sort(int *vet, int tam){

  int aux, menor, achei = 0;
  
  for(int i = 0; i < tam - 1; i++){

    menor = i;

    for(int j= i + 1; j <= tam - 1; j++){

      if (vet[j] < vet[menor]){
        menor = j;
        achei = 1;
      }

    }
    
    if(achei == 1){
      aux = vet[i];
      vet[i] = vet[menor];
      vet[menor] = aux;
      achei = 0;
    }

  }
}
