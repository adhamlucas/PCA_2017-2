#include <stdio.h>

int main(){
  int number1, number2, multiplo, i;

  printf("Digite dois números: ");
  scanf("%i %i", & number1, &number2);

  for(i = number1; i < number2; ++i){
    if(!(i % number1)){
      multiplo = i;
    }
  }

  printf("O maior múltiplo de %i menor que %i é: %i\n", number1, number2,
   multiplo);
}
