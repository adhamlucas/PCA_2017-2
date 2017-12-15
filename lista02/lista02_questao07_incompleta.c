#include <stdio.h>

int mmc(int number1, int number2);

int main(){
  int number1, number2, result;

  printf("Digite o número1: ");
  scanf("%i", &number1);
  printf("Digite o número2: ");
  scanf("%i", &number2);

  result = mmc(number1, number2);

  printf("O mmc(%i, %i) = %i\n", number1, number2, result);

  return 0;
}

int mmc(int number1, int number2){
  if(number1 % number2 == 0)
    return number1;
  else{
    return (mmc((number1), number2) + 0);

  }

}
