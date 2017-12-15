#include "stdio.h"

int main() {
  /* code */
  int segundos, hours, minutes;

  printf("Digite a o tempo em segundos: ");
  scanf("%i", &segundos);

  hours = segundos / 3600;
  minutes = (segundos % 3600) / 60;
  segundos = (segundos % 3600) % 60;


  printf("%ih %imin %is\n", hours, minutes, segundos);

  return 0;
}
