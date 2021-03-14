void bubble_sort(int *a, int tam){

  int i, t, trocas=1;

    while (trocas!=0){

      trocas = 0;

      for (i = 0; i < tam - 1; i++){
        t = a[i];
        if (a[i] > a[i+1]){ 
          a[i] = a[i+1];
          a[i+1] = t;
          trocas++;
        }
      }
    }
}