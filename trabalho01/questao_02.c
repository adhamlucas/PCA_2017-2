#include <stdio.h>

int primo(int n){
  if(!(n%2))
    return 1;
  else
    return 0;
}

int main(){
  int number;

  printf("Digite um número: ");
  scanf("%i", &number);

  printf("%i\n", primo(number));
  if (primo(number))
    printf("%i é primo\n", number);
  else
    printf("%i não é primo\n", number);

  return 0;
}
