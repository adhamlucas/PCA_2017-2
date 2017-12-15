#include <stdio.h>

int main(){
  int number, i, j, m;

  printf("Digite number: \n");
  scanf("%i", &number);

  for(i = 1; i <= number; ++i){
    for(j = (i+1); j <= number; ++j){
      for(m = (j +1); m <= number; ++m)
        printf("{%i, %i, %i}\n", i, j, m);
    }
  }
}
