#include <stdio.h>

int somarAlgarismos(int n, int * soma);

int main(){
  int number, sum = 0;

  printf("Digite um valor: ");
  scanf("%i", &number);

  somarAlgarismos(number, &sum);

  printf("Soma dos algarismos de %i = %i\n", number, sum);

  return 0;
}

int somarAlgarismos(int n, int * soma){
  if(n == 0)
    return 0;

  else{
    *soma += ( n% 10);
    somarAlgarismos(n/10, soma);
  }
}
