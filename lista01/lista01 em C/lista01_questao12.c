#include <stdio.h>

int main(){
  float produt_price, entrada;
  int parcel;

  printf("Digite o valor do produto: ");
  scanf("%f", & produt_price);

  parcel = produt_price / 3;
  entrada = (produt_price / 3) + 2 * ((produt_price / 3) - parcel);

  printf("O valor da entrada é: %.2f\n", entrada);
  printf("O valor das parcelas é: %i.00\n", parcel);
}
