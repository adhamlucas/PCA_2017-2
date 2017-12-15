#include <stdio.h>

int main(){
  int soma, number, limite, j;

  printf("Digite o número: ");
  scanf("%i", &limite);

  for(number = 1; number <= limite; ++number){
    soma = 0;
    for(j = 1; j <= number; ++j){

      if(!(number % j))
        soma += j;
    }
    if(soma == 2 * number)
      printf("%i\n", number);
  }

}
