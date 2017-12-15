#include <stdio.h>
#include <stdlib.h>

void inverte(int n, int *vet){

  for(int i = 0; i <= n && i < (n - i) ; ++i){
    *(vet + i) += *(vet + (n - i));
    *(vet + (n - i)) = *(vet + i) - *(vet + (n - i));
    *(vet + i) -= *(vet + (n - i));
  }

}

int main() {
  int tam;
  int *vet;
  printf("Digite o tamanho do vetor: ");
  scanf("%i", &tam);

  vet = (int *) malloc(tam * sizeof(int));

  for(int i = 0; i < tam; ++i){
    printf("Digite o valor de vet[%i]: ", i+1);
    scanf("%i", (vet + i));
  }

  inverte(tam - 1, vet);

  for(int i = 0; i < tam; ++i)
    printf("%i\n", *(vet + i));

  free(vet);
  
  return 0;
}
