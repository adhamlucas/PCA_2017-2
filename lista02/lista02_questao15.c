#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lerNumerosVetor(float *vetor, int tamVetor);
float * mallocVetor(int tamVetor);
float maiorNumeroVetor(float *vetor, int tamVetor);
float menorNumeroVetor(float *vetor, int tamVetor);
float calcAmplitude(float *vetor, int tamVetor);

int main()
{
  float *vetor;
  int tamVetor;
  float resultado;

  printf("Digite a quantidade de números da sequência: ");
  scanf("%i", &tamVetor);

  vetor = mallocVetor(tamVetor);

  printf("Digite os números da sequência\n");
  lerNumerosVetor(vetor, tamVetor);

  resultado = calcAmplitude(vetor, tamVetor);

  printf("Amplitude da sequência dada: %.2f\n", resultado);

  free(vetor);


  return 0;
}

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

float maiorNumeroVetor(float *vetor, int tamVetor){
  float maior;
  maior = vetor[0];
  for(int i = 1; i < tamVetor; i++){
      if(maior < vetor[i])
          maior = vetor[i];
  }

  return maior;
}

float menorNumeroVetor(float *vetor, int tamVetor){
  float menor;
  menor = vetor[0];
  for(int i = 1; i < tamVetor; i++){
      if(menor > vetor[i])
          menor = vetor[i];
  }

  return menor;
}

float calcAmplitude(float *vetor, int tamVetor){
  float maior, menor, amplitude;
  maior = maiorNumeroVetor(vetor, tamVetor);
  menor = menorNumeroVetor(vetor, tamVetor);
  amplitude = maior - menor;

  return amplitude;
}
