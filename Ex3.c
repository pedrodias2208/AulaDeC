#include <stdio.h>
int main(){
  float nota1;
  float nota2;
  float nota3;
  float media;
  float soma;
  
  printf("NOTA 1: ");
  scanf("%f", &nota1);
  printf("NOTA 2: ");
  scanf("%f", &nota2);
  printf("NOTA 3: ");
  scanf("%f", &nota3);
  soma=nota1+nota2+nota3;
  media=soma/3;
  printf("A média é: %f\n", media);
  return 0;
  
}
