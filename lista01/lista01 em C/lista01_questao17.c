#include <stdio.h>
#include <math.h>


int main(){
  double number, number_Real;
  int number_Final;

  printf("Digite um número: ");
  scanf("%lf", & number);


  number_Final = number;
  number_Real = number - number_Final;

  if(number_Real >= 0.5){
    number_Real = 1;
    number_Final += number_Real;
  }

  printf("O número arredondado: %i\n", number_Final);
}
