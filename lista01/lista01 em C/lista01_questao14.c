#include <stdio.h>

int main(){
  float minutos, segundos, total_seconds, rest;
  int horas, minutos2;

  printf("Digite os minutos: ");
  scanf("%f", &minutos);

  total_seconds = minutos * 60;
  horas = total_seconds / 3600;
  minutos2 = ((total_seconds / 3600) - horas) * 60;
  segundos = ((total_seconds - (horas * 3600)) - (minutos2 * 60));

  printf("%i : %i : %.1f\n", horas, minutos2, segundos);
}
