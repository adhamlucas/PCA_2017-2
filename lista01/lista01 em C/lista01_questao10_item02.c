#include <stdio.h>
#include <string.h>

int main(){
  int number, number1, number2, number3 last_number

  scanf("%i", number);

  number1 = number / 100;
  number2 = number - (number1 * 100);
  number2 = number1 / 10;
  number3 = number - (number1 * 100) - (number2 * 10);
  last_number = number + (number2 * 10) + (number3 * 100);

  return 0;

}
