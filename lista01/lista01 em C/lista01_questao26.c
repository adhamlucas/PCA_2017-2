#include <stdio.h>
#include <math.h>

int main(){
  int soma, i, number;

  printf("Digite um número: ");
  scanf("%i", & number);

  soma = 0;

  for(i = 1; i <= number; ++i){
    soma += pow(i,2);
  }

  printf("A soma do quadrados de [1, %i] número é: %i\n", number, soma);
}
