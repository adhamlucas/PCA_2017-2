#include <stdio.h>
#include <math.h>

int main(){
  double prestacao, financiamento, a, i;
  int n;

  printf("Digite o valor do financiamento: ");
  scanf("%lf", &financiamento);
  printf("Digite o número de prestações: ");
  scanf("%i", &n);
  printf("Digite a taxa de juros: ");
  scanf("%lf", &i);

  a = (pow((i + 1), n) - 1) / (pow((1 + i), n) * i);
  prestacao = financiamento / a;

  printf("Valor das prestações: %.2lf\n", prestacao);
}
