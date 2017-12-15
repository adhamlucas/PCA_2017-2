#include <stdio.h>
#include <math.h>

int main(){
  int x, y, z, verif = 0;

  printf("Digite o valor de x: ");
  scanf("%i", &x);

  for(z = 2; z <= (x - 1); ++z){
    for(y = 1; y <= x; ++y){
      if(pow(z, y) == x){
        printf("Potência perfeita %i = %i ^ %i \n", x, z , y);
        verif = 1;
      }
    }
  }

  if(!verif)
    printf("%i não é uma potência perfeita\n", x);

  return 0;
}
