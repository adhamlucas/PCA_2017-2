#include <stdio.h>

int main(){
  int number, part1, part2, i, j, k, l, count1, count2;
  int verif = 0;

  printf("Digite um número: ");
  scanf("%i", &number);

  for(i = 2; i <= number; ++i){
    count1 = 0;
    for(j = 1; j <= i; ++j){
      if(i % j == 0)
        count1 += 1;
    }
    if(count1 == 2){
      for(k = 2; k <= number; ++k){
        count2 = 0;

        for(l = 1; l <= k; ++l)
          if(k % l == 0)
            count2 += 1;

        if(count2 == 2){
          if(i * k == number){
            printf("Digite %i é semiprimo\n", number);
            verif = 1;
          }
        }
      }
    }
  }
  if(verif == 0)
    printf("O número não é semi-primo\n");

  return 0;
}
