#include <stdio.h>

int pow2(int base, int expo){
  int mult = 1;

  for(int i = 1; i <= expo; ++i)
    mult *= base;


  return mult;
}

int main(){
  int number, expo;

  printf("Digite a base e o expoente da potência: ");
  scanf("%i %i", &number, &expo);

  printf("%i ^ %i = %i\n",number, expo, pow2(number,expo));

  return 0;
}
