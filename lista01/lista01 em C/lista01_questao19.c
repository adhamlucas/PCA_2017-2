#include <stdio.h>

int main(){
  float number1, number2, number3, maior, menor;

  printf("Digite os três números (n1 n2 n3): ");
  scanf("%f %f %f", &number1, &number2, &number3);

  maior = number1;
  if(maior < number2)
    maior = number2;
  if(maior < number3)
    maior = number3;

  menor = number1;
  if(menor > number2)
    menor = number2;
  if(menor > number3)
    menor = number3;

  printf("O maior número é: %0.2f\n", maior);
  printf("O menor número é: %0.2f\n", menor);
}
