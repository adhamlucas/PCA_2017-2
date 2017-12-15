#include <stdio.h>

int main(){
  int x, y, i, mmc, maior, count;

  printf("Digite os dois números \n");
  scanf("%d %d", &x, &y);

  if(x < y){
    maior = y;
    i = x;
  }
  else{
    maior = x;
    i = y;
  }

  mmc = maior;

  while(mmc % i)
    mmc += maior;

  printf("mmc(%d %d) = %d \n", x, y , mmc);
}
