#include <stdio.h>


int sum_Algarismos(int n){
  int sum = 0, count = 0, n1 = n;

  while(n1 != 0){
    n1 /= 10;
    count += 1;
  }
  
  for(int i = 1; i <= count; ++i){
    sum += (n % 10);
    n = n / 10;
  }

  return sum;
}

int main(){
  int number;

  printf("Digite um número: ");
  scanf("%i", &number);

  printf("Soma dos algarismos de %i : %i\n", number, sum_Algarismos(number));

  return 0;
}
