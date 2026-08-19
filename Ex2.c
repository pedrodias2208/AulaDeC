#include <stdio.h>
int main(){
  int hora;
  int minutos;
  printf("Digite a hora atual: \n");
  scanf("%d", & hora);
  minutos=hora*60;
  printf("Se passaram %d minutos desde o começo do dia\n", minutos);
  return 0;
  

}
