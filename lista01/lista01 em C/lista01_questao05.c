#include <stdio.h>

int main(){
  int dia, mes, ano, j, h, k;

  printf("Digite a data dd/mm/aa:\n");
  scanf("%i %i %i", &dia, &mes, &ano);

  if (mes == 2 || mes == 1){
    mes = mes + 12;
    ano = ano - 1;
  }

  h = (dia + ((13 * (mes + 1)) / 5));
  h = h + ano + (ano / 4) - (ano / 100) + (ano / 400);
  h = h % 7;

  switch (h) {
    case 0:
      printf("Sábado\n");
      break;
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda-feira\n");
      break;
    case 3:
      printf("Terça-feira\n");
      break;
    case 4:
      printf("Quarta-feira\n");
      break;
    case 5:
      printf("Quinta-feira\n");
      break;
    case 6:
      printf("Sexta-feira\n");
      break;
    default:
      printf("Erro\n");
  }

  return 0;
}
