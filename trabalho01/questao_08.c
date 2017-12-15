#include <stdio.h>
#include <stdlib.h>

int negativos(int n, float *vet){
  int count = 0;

  for(int i = 0; i < n; ++i)
    if (*(vet+i) < 0)
      count += 1;

  return count;
}

int main(){
  int tam;
  float *vet;
  printf("Digite o tamanho do vetor: ");
  scanf("%i", &tam);

  vet = (float *) malloc(tam * sizeof(float));

  for(int i = 0; i < tam; i++){
    printf("Digite o número vet[%i]: ", i+1);
    scanf("%f", (vet + i));
  }

  printf("Qtd de números negativos: %i\n", negativos(tam, vet));

  return 0;
}
