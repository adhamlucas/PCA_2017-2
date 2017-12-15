#include <stdio.h>
#include <stdlib.h>

int m,n,x,y;

float ** malloc_Matriz(float ** matriz, int k, int l);
float **multiplicar(float **matrizA, float **matrizB);
void input_Value_Mat(float **matriz, int k, int l);
void print_mat(float **matriz, int k, int l);


int main(){
  float **matA, **matB, **matC;

  printf("Digite as dimensões da matriz A: ");
  scanf("%i %i", &m, &n);

  matA = malloc_Matriz(matA, m, n);
  input_Value_Mat(matA, m, n);

  printf("Digite as dimensões da matriz B: ");
  scanf("%i %i", &x, &y);

  matB = malloc_Matriz(matB, x, y);
  input_Value_Mat(matB, x, y);

  matC = malloc_Matriz(matC, m, y);
  matC = multiplicar(matA, matB);
  print_mat(matC, m, y);

  return 0;
}


float **multiplicar(float **matrizA, float **matrizB){
  float **matMult;
  float sum;
  matMult = malloc_Matriz(matMult, m, y);

  for(int i = 0; i < m; i++){
    for(int j = 0; j < y; j++){
      sum = 0;
      for(int k = 0; k < m; k++)
      sum += matrizA[i][k] * matrizB[k][j];
      matMult[i][j] = sum;
    }    
  }

  return matMult;
}


float ** malloc_Matriz(float ** matriz, int k, int l){
  matriz = (float **) malloc(k * sizeof(float*));
  for(int i = 0; i < k; i++)
    matriz[i] = (float *) malloc(l * sizeof(float));

  return matriz;
}

void input_Value_Mat(float **matriz, int k, int l){
  for(int i = 0; i < k; i++){
    for(int j = 0; j < l; j++){
      printf("Digite mat[%i][%i]: ", (i+1), (j+1));
      scanf("%f", &matriz[i][j]);
    }
  }
}

void print_mat(float **matriz, int k, int l){
  for(int i = 0; i < k; i++){
    for(int j = 0; j < l; j++){
      printf("%f ", matriz[i][j]);
    }
    printf("\n");
  }
}
