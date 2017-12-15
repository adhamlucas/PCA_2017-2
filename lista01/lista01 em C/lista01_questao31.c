#include <stdio.h>

int main(){
  int number1, number2, number3, number4, i, j, aux1, prod1, prod2, aux;


  for(i = 11; i <= 99; ++i){
    number1 = i;
    for(j = 11; j <= 99; ++j){
      number2 = j;

      number3 = number1 % 10;
      aux = (number1 - number3) / 10;
      number3 = (number3 * 10) + aux;
      prod1 = number1 * number2;

      number4 = number2 % 10;
      aux = (number2 - number4) / 10;
      number4 = (number4 * 10) + aux;
      prod2 = number3 * number4;
      if(prod1 == prod2)
        printf("%i x %i\n", number1, number2);
    }
  }
  return 0;
}
