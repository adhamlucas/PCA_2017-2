#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lerNumerosVetor(float *vetor, int tamVetor){
    for(int i = 0; i < tamVetor; i++){
        printf("Digite o %i número da sequência:", (i+1));
        scanf("%f",&vetor[i]);
    }
}

float * mallocVetor(int tamVetor){
    float * vetor = (float *) malloc(tamVetor * sizeof(float));
    return vetor;
}

float mediaVetor(float *vetor, int tamVetor){
    float soma = 0;
    printf("vetor = %f\n", vetor[1]);
    for(int i =0; i < tamVetor; i++){
        soma += vetor[i];
    }
    soma /= tamVetor;

    return soma;
}

float *vetorDesvios(float *vetor, int tamVetor){
  float * desvios = (float *) malloc(tamVetor *sizeof(float));
  float media;
  media = mediaVetor(vetor, tamVetor);

  for(int i = 0; i < tamVetor; i++){
    desvios[i] = vetor[i] - media;
  }

  return desvios;
}

float desvioPadrao(float *vetor, int tamVetor){
  float* desvios, variancia, desvioPadrao;

  desvios = vetorDesvios(vetor, tamVetor);
  for(int i = 0; i < tamVetor; i++){
    variancia += (desvios[i] * desvios[i]);
  }

  variancia /= tamVetor;
  desvioPadrao = sqrt(variancia);

  free(desvios);

  return desvioPadrao;
}


int main()
{
    float *vetor, resultado;
    int tamVetor;

    printf("Digite a quantidade de números da sequência: ");
    scanf("%i", &tamVetor);

    vetor = mallocVetor(tamVetor);

    printf("Digite os números da sequência\n");
    lerNumerosVetor(vetor, tamVetor);

    resultado = desvioPadrao(vetor, tamVetor);

    printf("Amplitude da sequência dada: %.2f\n", resultado);

    free(vetor);

    return 0;
}
