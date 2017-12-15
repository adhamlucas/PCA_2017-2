#include <stdio.h>

int K_esimoDigito(int number, int casa){
  for(int i = 1; i < casa; ++i){
    number = number / 10;
  }

  return (number % 10);
}

int main(){
  int number, algarismo;

  printf("Digite um número: ");
  scanf("%i", &number);
  printf("Digite o algarismo a ser mostrado: ");
  scanf("%i", &algarismo);

  printf("%i\n", K_esimoDigito(number, algarismo));

  return 0;
}
