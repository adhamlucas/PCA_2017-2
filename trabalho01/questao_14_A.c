#include <stdio.h>
#include <stdlib.h>

int m, n;

float** soma(float ** matrizA, float ** matrizB){
  float ** matSum;
  matSum = (float **) malloc(m * sizeof(float*));

  for(int i = 0; i < m; i++)
    matSum[i] = (float *) malloc(n * sizeof(float));

  for(int i = 0; i < m; ++i){
    for(int j = 0; j < n; j++){
      matSum[i][j] = matrizA[i][j] + matrizB[i][j];
    }
  }

  return matSum;
}

void input_Value_Mat(float ** matrizA){
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("Digite mat[%i][%i]: ", (i+1), (j + 1));
      scanf("%f", &matrizA[i][j]);
    }
  }
}

float ** malloc_Matriz(float ** matriz){
  matriz = (float **) malloc(m * sizeof(float*));
  for(int i = 0; i < m; i++)
    matriz[i] = (float *) malloc(n* sizeof(float));

  return matriz;
  }


int main(){
  float **matA, **matB, **matSum;

  printf("Digite as dimensões da matrizA: ");
  scanf("%i %i", &m, &n);


  matA = malloc_Matriz(matA);
  matB = malloc_Matriz(matB);
  // matA = (float **) malloc(m * sizeof(float*));
  // matB = (float **) malloc(m * sizeof(float*));
  // for(int i = 0; i <m; i++){
  //   matA[i] = (float *) malloc(n * sizeof(float));
  //   matB[i] = (float *) malloc(n * sizeof(float));
  // }

  printf("Digite os valores da matriz A\n");
  input_Value_Mat(matA);
  printf("Digite os valores da matriz B\n");
  input_Value_Mat(matB);

  matSum = soma(matA, matB);

  free(matA);
  free(matB);

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++)
      if(j < n-1)
        printf("%.2f ", matSum[i][j]);
      else
        printf("%.2f\n", matSum[i][j]);
  }

  free(matSum);

  return 0;
}
