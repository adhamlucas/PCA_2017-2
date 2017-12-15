#include <stdio.h>

int main(){
  int divisor, dividendo, quociente, resto;

  printf("Digite o dividendo: ");
  scanf("%i", & dividendo);
  printf("Digite o divisor: ");
  scanf("%i", &divisor);

  quociente = dividendo / divisor;
  resto = dividendo - (divisor * quociente);

  printf("Resto: %i\n", resto);

  return 0;
}
