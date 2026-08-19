#include <stdio.h>
int main(){
  float base;
  float altura;
  float area;
  printf("Indique a base: \n");
  scanf("%f", &base);
  printf("Indique a altura: \n");
  scanf("%f", &altura);
  area=base*altura;
  printf("A área é: %.2f\n", area);
  return 0;
}
