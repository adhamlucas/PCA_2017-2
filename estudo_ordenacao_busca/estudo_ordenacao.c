#include <stdio.h>

void bolha(int tamVetor, int * vetor);
void bolhaRecursivo(int tamVetor, int * vetor);
void rapida(int tamVetor, int *vetor);
void printVetor(int tamVetor, int *vetor);

int main(){
  int vetor[10] = {10,3,4,7,6,9,8,1,2,0};
  int vet[4] = {8,1,3,5};

  // bolhaRecursivo(10, vetor);

  rapida(4, vet);
  // for(int i = 0; i < 10; i++)
    // printf("%i ", vetor[i]);

  // printf("\n");

  return 0;
}

void bolha(int tamVetor, int * vetor){

  for(int i = tamVetor-1; i > 0; i--){
    int troca = 0;
    for(int j = 0; j < i; j++){
      if(vetor[j] > vetor[j+1]){
        int aux = vetor[j];
        vetor[j] = vetor[j+1];
        vetor[j+1] = aux;
        troca = 1;
      }

    }
    if(troca == 0)
      return;
  }
}

void bolhaRecursivo(int tamVetor, int * vetor){
  int j;
  int troca = 0;
  for(j = 0; j < tamVetor-1; j++)
    if(vetor[j] > vetor[j+1]){
      int aux = vetor[j];
      vetor[j] = vetor[j+1];
      vetor[j+1] = aux;
      troca = 1;
    }

  if(troca)
    bolhaRecursivo(tamVetor - 1, vetor);
}

void rapida(int tamVetor, int *vetor){
  if(tamVetor <= 1)
    return;
  else{
    int pivo = vetor[0];
    int a = 1;
    int b = tamVetor-1;
    do{
      while(a < tamVetor && vetor[a] <= pivo) a++;
      while(vetor[b] > pivo) b--;
      if(a < b)
      int aux = vetor[a];
      vetor[a] = vetor[b];
      vetor[b] = aux;
      a++; b--;
    }while(a <= b);]


    vetor[0] = vetor[b];
    vetor[b] = pivo;

    rapida(b, vetor);
    rapida(tamVetor - a; &vetor[a]);
  }

}

void printVetor(int tamVetor, int *vetor){
  for(int i = 0; i < tamVetor; i++){
    if(i < tamVetor -1)
      printf("%i ", vetor[i]);
    else
      printf("%i\n", vetor[i]);
  }
}
