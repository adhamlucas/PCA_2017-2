#include <stdio.h>

int main(){
  int fib, num1, num2, n, i;

  printf("Digne n: ");
  scanf("%i", &n);

  num1 = 0;
  num2 = 1;

  for(i = 1; i <= n; ++i){
    fib = num1 + num2;
    num1 = num2;
    num2 = fib;
  }

  printf("Fibbonaci de %i: %i\n", n, num1);

  return 0;
}
