#include <stdio.h>

int main() {
  int var1, var2;

  printf("Digite o valor da variável1: ");
  scanf("%i", &var1);
  printf("Digite o valor da variável2: ");
  scanf("%i", &var2);

  if(var1 > var2){
    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;
  }
  else{
    var2 = var2 + var1;
    var1 = var2 - var1;
    var2 = var2 - var1;
  }
  printf("Variavável 1: %i\n", var1);
  printf("Variável 2: %i\n", var2);

  return 0;
}
