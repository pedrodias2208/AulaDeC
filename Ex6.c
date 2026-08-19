#include <stdio.h>
int main(){
  int numero;
  printf("Indique um número para descobrir se é multiplo de 5: ");
  scanf("%d", &numero);
  if (numero%5==0){
    printf("O número é multiplo de 5\n");

  } 
  else{
    printf("O número não é múltiplo de 5\n");
  }
 return 0;
}
