#include <stdio.h>

int fibonacci(int n){
  if(n == 1 || n == 0)
    return n;
  else
    return(fibonacci(n - 1) + fibonacci(n - 2));
}

int main(){
  int number, fib;

  printf("Digite um número: ");
  scanf("%i", &number);

  printf("fibonaci(%i) = %i\n", number, fibonacci(number));

  return 0;
}
