#include <stdio.h>
int main(){
  float smin;
  float sbruto;
  float quantos_salarios;
  scanf("%f", &smin);
  scanf("%f", &sbruto);
  
  quantos_salarios=sbruto/smin;

  printf("%f\n", quantos_salarios);

  return 0;
  
}
