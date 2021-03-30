
void soma(int A[][TAM], int B[][TAM], int C[][TAM], int tam){

  /*As matrizes devem ser do mesmo tamanho*/

  for(int i = 0; i < tam; i++){
	  
	/*Este primeiro for atribui uma complexidade de 'tam' vezes a ser feito*/
	
    for(int k = 0; k < tam; k++){
		
		/*Este primeiro for atribui uma complexidade de 'tam' vezes a ser feito*/
		
      C[i][k] = A[i][k] + B[i][k];
    }
  }
  
  
  /*Como um for está dentro do outro, multiplicamos os valores encontrados
  
			tam * tam = tam²
	
	Sendo assim, temos uma complexidade de 'tam²'.
  */
}
