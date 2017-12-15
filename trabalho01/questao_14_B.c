#include <stdio.h>
#include <stdlib.h>

int m, n;

float **subtrair(float ** matrizA, float ** matrizB){
  float **mat_Sub;

  mat_Sub = (float **) malloc(m * sizeof(float *));
  for(int i = 0; i < m; i++)
    mat_Sub[i] = (float *) malloc(n * sizeof(float));

  for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
      mat_Sub[i][j] = matrizA[i][j] - matrizB[i][j];

    return mat_Sub;
}

void input_Value_Mat(float **mat){
  for(int i =0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("Digite mat[%i][%i]: ", i+1,j+1);
      scanf("%f", &mat[i][j]);
    }
  }
}

void print_mat(float **matriz, int k, int l){
  for(int i = 0; i < k; i++){
    for(int j = 0; i < l; j++){
      printf("%f ", matriz[i][j]);
    }
    printf("\n");
  }
}

float ** malloc_Matriz(float ** matriz){
  matriz = (float **) malloc(m * sizeof(float*));
  for(int i = 0; i < m; i++)
    matriz[i] = (float *) malloc(n* sizeof(float));

  return matriz;
  }

int main(){
  float **matA, **matB, **matSub;

  printf("Digite as dimensões das matrizes: ");
  scanf("%i %i", &m, &n);

  matA = (float **) malloc(m * sizeof(float*));
  matB = (float **) malloc(m * sizeof(float *));
  for(int i = 0; i < m; i++){
    matA[i] = (float *) malloc(n * sizeof(float));
    matB[i] = (float *) malloc(n * sizeof(float));
  }

  printf("Digite os valores da matriz A\n");
  input_Value_Mat(matA);
  printf("Digite os valores da matriz B\n");
  input_Value_Mat(matB);

  matSub = subtrair(matA, matB);

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(j < n - 1)
        printf("%.2f ", matSub[i][j]);
      else
        printf("%.2f\n", matSub[i][j]);
    }
  }
}
