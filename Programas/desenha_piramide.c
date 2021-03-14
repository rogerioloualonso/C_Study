#include <stdio.h>

int main(void) {

int n, cont1, cont2, contvazio = 1;

printf("Digite um valor inteiro positivo:");
scanf("%d", &n);

cont1 = (n/2) +1;
printf("%d\n", cont1);
cont2 = 1;

for(int i = cont1; i > 0; i--){

  for(int k = 0; k < cont1; k++){
    printf(" ");
  }



  if(cont2 == 1){
    printf("*");
    cont1 -= 2;
    cont2 += 4;
    printf("\n");
    continue;

  }else{
     for(int j = 1; j <= cont2; j++){
       if(j % 2 == 0){
         printf(" ");  
        }else{
          printf("*");
        }
      
   }
  }

  printf("\n");



  if (cont1 == 0){
    cont1++;
  }
    cont2 += 2;
    cont1--;
}
  return 0;
}