#include <stdio.h>

int main(){
  int valor, real_100, real_50, real_20, real_10, real_5, real_2, real_1;
  float cent_50, cent_25, cent_10, cent_5, cent_1;

  printf("Digite o valor: ");
  scanf("%i", &valor);

  real_100 = valor / 100;
  valor = valor - (real_100 * 100);
  real_50 = valor / 50;
  valor = valor - (real_50 * 50);
  real_20 = valor / 20;
  valor = valor - (real_20 * 20);
  real_10 = valor / 10;
  valor = valor - (real_10 * 10);
  real_5 = valor / 5;
  valor = valor - (real_5 * 5);
  real_2 = valor / 2;
  valor = valor - (real_2 * 2);
  real_1 = valor;

  printf("%i nota(s) de R$ 100,00\n", real_100);
  printf("%i nota(s) de R$ 50,00\n", real_50);
  printf("%i nota(s) de R$ 20,00\n", real_20);
  printf("%i nota(s) de R$ 10,00\n", real_10);
  printf("%i nota(s) de R$ 5,00\n", real_5);
  printf("%i nota(s) de R$ 2,00\n", real_2);
  printf("%i nota(s) de R$ 1,00\n", real_1);

  return 0;
}
