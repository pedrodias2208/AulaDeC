#include <stdio.h>
int main(){
  float salario_minimo;
  float dolar;
  float quant_casas;
  float real;

  printf("Indique o valor do salário mínimo: \n");
  scanf("%f", &salario_minimo);
  printf("Indique o valor do Dólar hoje: \n");
  scanf("%f", &dolar);
  real=10000000*dolar;
  quant_casas=real/(150*salario_minimo);
  printf("É possível construir %.2f casas\n", quant_casas);
  return 0;


}
