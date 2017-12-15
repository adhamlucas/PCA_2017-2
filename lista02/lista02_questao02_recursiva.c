#include <stdio.h>

int fat_Impar(int n){
  if(!(n%2))
    n -=  1;

  if (n == 1)
    return n;
  else
    return (fat_Impar(n-2) * n);
}

int main(){
  int number;

  printf("Digite n de fat impar desejado: ");
  scanf("%i", &number);
  printf("%i\n", fat_Impar(number));

  return 0;
}
