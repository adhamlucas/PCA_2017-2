#include <stdio.h>
#include <stdlib.h>

void bolha(int tamVetor, int *vetor){
  int i, j;
  for(i = (tamVetor - 1); i >=1; i --)
    for(j = 0; j < i; j++)
      if(vetor[j] > vetor[j+1]){
        int temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j+1] = temp;
      }
}

int main(){
  int *vet = (int*) malloc(10*sizeof(int));

  for(int i = 0;i < 10; i++)
    scanf("%i", &vet[i]);

  for(int i = 0; i < 10; i++)
    printf("%i ", vet[i]);
  printf("\n");

  bolha(10, vet);

  for(int i = 0; i < 10; i++)
    printf("%i ", vet[i]);
  printf("\n");

  free(vet);

  return 0;
}
