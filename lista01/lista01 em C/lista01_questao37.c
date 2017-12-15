#include <stdio.h>

int main(){
  int n0, fracao;
  float K, S;

  printf("Digite o valor de K: ");
  scanf("%f", &K);

  S = 0;
  n0 = 0;

  while(S <= K){
    n0 += 1;
    S += (1.0 / n0);
  }

  printf("n0 = %i\n", n0);

  return 0;
}
