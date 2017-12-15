#include <stdio.h>

double pi(int n){
  int sinal = 1.0;
  if(n == 1)
    return 1;
  else{
    if (n%2 == 0)
      sinal = -1.0;

    return ((sinal * (1.0/(n*2 - 1))) + pi(n-1));
  }
}

int main() {
  int n;

  printf("Digite o valor de n: ");
  scanf("%i", &n);

  printf("%lf\n", pi(n));

  return 0;
}
