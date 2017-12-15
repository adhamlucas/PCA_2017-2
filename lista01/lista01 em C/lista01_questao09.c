#include <stdio.h>
#include <math.h>

int main(){
  int a, b, c, result;
  a = 3;
  b = -9;
  c = 6;

  result = (-(b) + sqrt(((b * b) - 4*a*c)) / (2 * a));

  printf("Resultado: %i\n", result);

  return 0;
}
