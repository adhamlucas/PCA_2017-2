#include <stdio.h>
#include <math.h>

double calcular_raizn(int n, double number);

int main(){
  int i, n;
  double number, produto, raizn;

  printf("Digite o valor de n: ");
  scanf("%i", &n);
  produto = 1;

  for(i = 1; i <= n; ++i){
    printf("Digite um número: ");
    scanf("%lf", &number);
    produto *= number;
  }

  raizn = calcular_raizn(n, produto);
  // raizn = pow(produto, 1.0/n);
  printf("Resultado: %lf\n", raizn);

  return 0;
}

double calcular_raizn(int n, double number){
  return pow(number, 1.0/n);
}
