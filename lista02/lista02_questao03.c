#include <stdio.h>
#include <math.h>

int number_Primo(int n){
  int limite, count = 0;

  limite = sqrt(n);

  for(int i = 1; i <= limite; ++i){
    if(!(n % i)){
      if(n / i != i)
        count += 1;
      else
        count += 2;
    }
  }

  return (count == 1);
}

int fat_Primo(int n){
  int fat = 1;

  for(int i = n; i > 0; --i)
    if(number_Primo(i))
      fat *= i;

  return fat;
}


int main(){
  int number;

  printf("Digite o número de fat primo desejado : ");
  scanf("%i", &number);
  printf("Fatorial primo de %i = %i\n", number, fat_Primo(number));

  return 0;
}
