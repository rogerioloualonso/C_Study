
void multiplica(int A[][tam1], int B[][tam2], int C[][tam2], int tamA, int tamB){

  int soma = 0, aux = 0;

  if(tam1 == tamB){

    for(int i = 0; i < tam2; i++){
		
		/*Este primeiro for atribui uma complexidade de tam*/
		
      for(int k = 0; k < tam2; k++){
		  
		  /*Este segundo for atribui uma complexidade de tam*/
		  
		  
        for(int l = 0; l < tam1; l++){
			
			/*Este terceiro for atribui uma complexidade de tam*/
			
			
          soma += A[i][l] * B[l][aux];
        }
        C[i][k] = soma;
        soma = 0;
        aux++;
      }
      aux = 0;
    }
  } 
  
  /*Como um for está dentro do outro, multiplicamos os valores encontrados
  
			tam * tam * tam = tam³
	
	Sendo assim, temos uma complexidade de 'tam³'.
  */

}