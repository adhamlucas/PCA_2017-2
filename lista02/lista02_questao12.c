#include <stdio.h>
#include <stdlib.h>

int * mallocVet(int tamVet);
int *reallocVetor(int * vetor, int novoTamVetor);
int *vetPar(int *vetor, int tamVetor, int * tamVetPar);
int *vetImpar(int *vetor, int tamVetor, int * tamVetImpar);
void printVetor(int *vetor, int tamVetor);
void lerValoresVetor(int *vetor, int tamVetor);

int main(){
  int *vetor, *par, * impar, tamVet, tamVetPar, tamVetImpar;

  printf("Digite o tamanho do vetor: ");
  scanf("%i", &tamVet);

  vetor = mallocVet(tamVet);
  lerValoresVetor(vetor, tamVet);

  par = vetPar(vetor, tamVet, &tamVetPar);
  impar = vetImpar(vetor, tamVet, &tamVetImpar);

  printVetor(vetor, tamVet);
  printVetor(par, tamVetPar);
  printVetor(impar, tamVetImpar);

  free(vetor);
  free(par);
  free(impar);

  return 0;
}

int * mallocVet(int tamVet){
  int *vet;
  vet = (int *) malloc(tamVet * sizeof(int));

  return vet;
}

int *reallocVetor(int * vetor, int novoTamVetor){
  int * newVetor = NULL;
  newVetor = (int *) realloc(vetor, novoTamVetor * sizeof(int));
  return newVetor;
}

int *vetPar(int *vetor, int tamVetor, int * tamVetPar){
  int *vetorPar = NULL;
  int countPar = 0;

  for(int i = 0; i < tamVetor; i++){
    if((vetor[i] % 2 == 0)){
      countPar += 1;
      vetorPar = reallocVetor(vetorPar, countPar);
      vetorPar[countPar-1] = vetor[i];
    }
  }

  *tamVetPar = countPar;

  return vetorPar;
}

int *vetImpar(int *vetor, int tamVetor, int* tamVetImpar){
  int * vetorImpar = NULL;
  int countImpar = 0;

  for(int i = 0; i < tamVetor; i++)
    if(vetor[i] % 2){
      countImpar++;
      vetorImpar = reallocVetor(vetorImpar, countImpar);
      vetorImpar[countImpar-1] = vetor[i];
    }

  *tamVetImpar = countImpar;

  return vetorImpar;
}

void printVetor(int *vetor, int tamVetor){
  for(int i = 0; i < tamVetor; i++){
    if(i < (tamVetor- 1))
      printf("%i ", vetor[i]);
    else
      printf("%i\n",vetor[i]);
  }
}

void lerValoresVetor(int * vetor, int tamVetor){
  for(int i = 0; i < tamVetor; i++){
    printf("vetor[%i]: ", (i + 1));
    scanf("%i", &vetor[i]);
  }
}
