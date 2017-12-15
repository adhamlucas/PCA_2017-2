#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2){
  int delta, count;
  delta = (b * b) - (4 * a * c);

  if (delta < 0)
    count = 0;
  else{

    *x1 = (-b + sqrt(delta)) / (2.0 * a);
    *x2 = (-b - sqrt(delta)) / (2.0 * a);

    if (delta == 0)
      count = 1;
    else
      count = 2;
  }

  return count;
}

int main(){
  float a, b, c, x1 , x2;
  int count;

  printf("Digite os valores de a, b e c\n");
  scanf("%f %f %f", &a, &b, &c);

  count = raizes(a, b, c, &x1, &x2);

  printf("Qtd de raízes distinas: %i\n", count);

  if (count > 0)
    printf("X1 = %f\nX2 = %f\n", x1, x2);

  return 0;
}
