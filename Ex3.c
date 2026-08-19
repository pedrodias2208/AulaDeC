#include <stdio.h>
int main(){
  float nota1;
  float nota2;
  float nota3;
  float media;
  float soma;
  
  printf("Insira as 3 notas: \n");
  scanf("Nota 1: %f\n", &nota1);
  scanf("Nota 2: %f\n", &nota2);
  scanf("Nota 3: %f\n", &nota3);
  soma=nota1+nota2+nota3;
  media=soma/3;
  printf("A média é: %f\n", media);
  return 0;
  
}
