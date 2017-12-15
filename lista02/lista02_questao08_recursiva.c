#include <stdio.h>

int powNumber(int base, int expo);

int main(){
  int base, expo, result;

  printf("Digite a base: ");
  scanf("%i", &base);
  printf("Digite o expoente: ");
  scanf("%i", &expo);

  result = powNumber(base, expo);

  printf("pow(%i, %i) = %i\n", base, expo, result);

  return 0;
}

int powNumber(int base, int expo){
  if(expo == 0)
    return 1;
  else
    return (powNumber(base, expo-1) * base);
}
