#include <stdio.h>
#include <math.h>

int main(){
  double number, raiz;
  int raiz1;

  printf("Digite um número: ");
  scanf("%lf", &number);

  raiz = sqrt(number);
  raiz1 = sqrt(number);

  if(raiz == raiz1)
    printf("%.2f\n", raiz);
  else
    printf("O número não é um quadrado perfeito\n");


}
