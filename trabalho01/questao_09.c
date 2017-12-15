#include <stdio.h>
#include <stdlib.h>

int pares(int n, int *vet){
  int count = 0;

  for(int i = 0; i < n; ++i)
    if(!(*(vet + i) % 2))
      count += 1;

  return count;
}

int main(){
  int tam, *vet;

  printf("Digite tamanho do vetor: ");
  scanf("%i", &tam);

  vet = (int *) malloc(tam * sizeof(int));

  for(int i = 0; i < tam; ++i){
    printf("Digite o valor de vet[%i]: ", i + 1);
    scanf("%i", (vet + i));
  }

  printf("Qtd de números pares no vetor: %i", pares(tam, vet));

  return 0;
}
