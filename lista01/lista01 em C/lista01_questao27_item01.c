#include <stdio.h>

int main(){

  float soma, numerador, denominador, fracao, i, number;
  printf("Digite o valor de n parcelas a ser somadas: ");
  scanf("%f", &number);

  numerador = 1;
  denominador = 2;

  fracao = numerador / denominador;

  for(i = 1; i < number; ++i){
    numerador += 2;
    denominador += 3;
    fracao += (numerador / denominador);
  }

  printf("A soma das n fracoes é: %2.f\n", fracao);
}
