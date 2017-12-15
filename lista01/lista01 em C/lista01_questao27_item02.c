#include <stdio.h>

int main(){
  float soma, fracao, numerador;
  int denominador, n, count;
  printf("Digite o valor da soma dos n primeiros termos da sequência: ");
  scanf("%i", &n);

  numerador = 1.0;
  denominador = 1;
  soma = 1;

  for(count = 1; count < n; ++count){
    ++denominador;

    if(!(denominador % 2)) soma += (numerador / -denominador);
    else soma += (numerador / denominador);
    
  }
  printf("A soma das n parcelas é: %.2f\n", soma);
}
