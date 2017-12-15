#include <stdio.h>

int main(){
  int number, part1, part2, soma, quadrado, i;

  for(i = 32; i <= 99; ++i){
    quadrado = i * i;
    part1 = quadrado / 100;
    part2 = quadrado - (100 * part1);
    soma = part1 + part2;
    if(soma * soma == quadrado)
      printf("%i\n", quadrado);
  }

  return 0;
}
