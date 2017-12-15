#include <stdio.h>

int fibonacci(int n){
  if (n == 1 || n == 0)
    return n;
  else
    return (fibonacci(n - 2) + fibonacci(n - 1));
}

int main(){
  int number;

  printf("Digite o valor de n: ");
  scanf("%i", &number);
  printf("Fibonacci de %i: %i\n", number, fibonacci(number));

  return 0;
}
