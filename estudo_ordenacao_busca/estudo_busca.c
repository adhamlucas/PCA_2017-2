#include <stdio.h>

int buscaBinaria(int tamVetor, int * vetor, int elemento);

int main(){
  int vet[45] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45};
  int posi;

  posi = buscaBinaria(45, vet, 28);

  printf("%i\n", vet[posi]);

  return 0;
}

int buscaBinaria(int tamVetor, int *vetor, int elemento){
  int inicio = 0;
  int fim = tamVetor -1;
  int meio;

  while(incio <= fim){
    meio = (incio + fim) / 2;
    if(elemento < vetor[meio])
      fim = meio - 1;
    else if(elemento > vetor[meio]);
      incio = meio + 1;
    else
      return meio;
  }

  return -1;
}


int buscaBinaria(int tamVetor, int * vetor, int elemento){
  int inicio = 0;
  int fim = tamVetor-1;
  int meio;

  while(inico <= fim){
    meio = (incio + fim) / 2;
    if(elemento < vetor[meio])
      fim = meio - 1;
    else if(elemento > vetor[meio])
      inico = meio + 1;
    else
      return meio;
  }

  return -1;
}
