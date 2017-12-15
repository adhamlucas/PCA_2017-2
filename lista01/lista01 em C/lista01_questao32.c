#include <stdio.h>

int main(){
  int number, algarismos;

  printf("Digite um número: ");
  scanf("%i", &number);

  algarismos = 1;

  if(!(number / 10))
    algarismos = 1;
  else{
    while(number / 10){
      number = number / 10;
      algarismos += 1;
    }
  }

  printf("Algarismos de %i: %i\n", number, algarismos);

}
