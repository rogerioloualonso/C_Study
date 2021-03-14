
int* soma_poli(int* vetA, int* vetb, int tam1, int tam2){

  int maior;

  if(tam1 > tam2){
    maior = tam1;
  }else{
    maior = tam2;
  }

  int *result = malloc(maior * sizeof(int));
  maior--;
  tam2--;

  for(int i = maior; i >= 0; i--){

    if(tam2 >= 0){
      result[maior] = veta[maior] + vetb[tam2];
      maior--;
      tam2--;
    }else{
      result[maior] = veta[maior];
      maior--;
    }

  }

  return result;
}
