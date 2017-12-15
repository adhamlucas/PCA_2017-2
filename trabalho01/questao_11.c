#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double avalia(double *poli, int grau, double x){
  double result = 0;

  for(int i = grau; i > 0; --i)
    result += *(poli + i) * pow(x,i);

  result += *poli;

  return result;
}

int main(){
  double x;
  int grau, expo;
  double * poli;

  printf("Digite o grau do polinômio: ");
  scanf("%i", &grau);

  poli = (double *) malloc((grau+1) * sizeof(double));

  for(int i = 0; i <= grau; ++i){
    printf("Digite o %iº coefienciente", i+1);
    scanf("%lf", &poli[grau-i]);
  }


  printf("Digite o valor de x: ");
  scanf("%lf", &x);

  x = avalia(poli, grau, x);

  free(poli);

  printf("%lf\n", x);

  return 0;
}
