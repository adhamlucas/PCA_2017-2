#include <stdio.h>
#include <stdlib.h>

void deriva(double *poli, int grau, double *out){
  for(int i = 0; i < grau; i++)
    *(out + i) = *(poli + (grau-i)) * (grau-i);

}

int main(){
  int grau;
  double * poli;
  double *out;
  printf("Digite o grau do polinômio: ");
  scanf("%i", &grau);

  // double poli[grau+1], out[grau];
  poli = (double *) malloc((grau + 1) * sizeof(double));
  out = (double *) malloc(grau * sizeof(double));

  for(int i = 0; i <= grau; i++){
    printf("Digite o %iº coeficiente", 1 + i);
    scanf("%lf", &poli[grau-i]);
  }

  deriva(poli, grau, out);

  free(poli);
  poli = NULL;

  for(int i = 0; i < grau; i++){
    if(i < grau - 1){
      printf("%.1lfx^%i", *(out + i), (grau - 1 - i));
      printf(" + ");
    }
    else
      printf("%.1lf\n", *(out + i));
  }

  free(out);
  return 0;
}
