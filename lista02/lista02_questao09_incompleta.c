#include <stdio.h>
#include <stdlib.h>

int maiorNumeroVetor(int * vet, int n, int maior);

int main(){
  int number, *vet, maior =  -2147483648, result;

  printf("Digite o tamanho do vetor: ");
  scanf("%i", &number);

  vet = (int *) malloc(number * sizeof(int));

  for(int i = 0; i < number; ++i){
    printf("Digite vet[%i]: ", i + 1);
    scanf("%i", &vet[i]);
  }

  result =  maiorNumeroVetor(vet, number-1, maior);

  printf("O maior 2 número: %i\n", result);

  free(vet);

  return 0;
}

int maiorNumeroVetor(int * vet, int n, int maior){
  if(n == 0)
    return 0;



  else{
    maiorNumeroVetor(vet, n - 1, maior);
    printf("maior = %i\n", maior);

  }


}
