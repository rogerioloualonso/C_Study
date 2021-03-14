int* merge(int *a, int *b, int tam1, int tam2){

  int contA = 0, contB = 0, cont = 0;
  int *resp = malloc((tam1 + tam2) * sizeof(int));
  /*Maior vetor possivel*/

  while((contA < tam1)&&(contB < tam2)){
    
      if(a[contA] < b[contB]){
        resp[cont] = a[contA];
        contA++;
        cont++;
      }else if(b[contB] < a[contA]){
        resp[cont] = b[contB];
        contB++;
        cont++;
      }else{
        resp[cont] = a[contA];
        contA++;
        contB++;
        cont++;
    }

    
  }

  while((contA < tam1)){
    resp[cont] = a[contA];
    cont++;
    contA++;
  }

  while((contB < tam2)){
    resp[cont] = b[contB];
    contB++;
    cont++;
  }

  return resp;
}
