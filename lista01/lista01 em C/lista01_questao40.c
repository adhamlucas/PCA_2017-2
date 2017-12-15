#include <stdio.h>
#include <math.h>

int main(){
  int number, count, p, k, i, verif = 0;
  float limite;
  printf("Digite um número: ");
  scanf("%i", &number);

  for(p = 2; p <= number; ++p){
    limite = sqrt(p);
    count = 0;

    for(i  = 1; i <= limite; ++i){
      if(!(p % i))
        count += 2;
    }

    if(count == 2){
      for(k = 1; k <= number; ++k){
        if(pow(p,k) == number){
          printf("%i é potência prima\n", number);
          verif = 1;
        }
      }
    }
  }
  if(!verif)
    printf("%i não é uma potência prima\n", number);

  return 0;
}
