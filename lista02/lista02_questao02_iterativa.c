#include <stdio.h>

int fat_Impar(int n){
  int fat = 1;

  for (int i = 1; i <= n; ++i)
    if(i % 2)
      fat *= i;

  return fat;
}

int main(){
  int number;

  printf("Digite n de fat impar desejado: ");
  scanf("%i", &number);

  printf("%i\n", fat_Impar(number));

  return 0;
}
