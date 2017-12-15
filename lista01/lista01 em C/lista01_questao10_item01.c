#include <stdio.h>

int main(){
  double celsius, fahrenheit;

  printf("Conversão de graus Fahrenheit para graus Celsius\n");
  printf("Digite a temperatura em Fahrenheit: ");
  scanf("%lf", &fahrenheit);

  celsius = ( (5.0/9.0) * (fahrenheit - 32) );

  printf("%.2lf F = %.2lf °C\n", fahrenheit, celsius);
}
