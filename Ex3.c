#include <stdio.h>
int main(){
  float nota1;
  float nota2;
  float nota3;
  float media;
  float soma;
  
  printf("Insira a NOTA 1: ");
  scanf("%f\n", &nota1);
  printf("NOTA 2: ");
  scanf("%f\n", &nota2);
  printf("NOTA 3: ");
  scanf("%f\n", &nota3);
  soma=nota1+nota2+nota3;
  media=soma/3;
  printf("A média é: %f\n", media);
  return 0;
  
}
