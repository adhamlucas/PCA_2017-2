#include <stdio.h>
#include <stdlib.h>

int m, n;

float **dividir(float ** matrizA, float ** matrizB, int x, int y);
void input_Value_Mat(float ** matriz, int k, int l);
float ** malloc_Matriz(float ** matriz, int k, int l);
void print_mat(float **matriz, int k, int l);

int main(){
  float **matrizA, **matrizB, **matrizC;
  printf("Digite os valores de m e n: ");
  scanf("%i %i", &m, &n);

  printf("Digite os valores da Matriz A\n");
  matrizA = malloc_Matriz(matrizA, m, n);
  input_Value_Mat(matrizA, m, n);

  printf("Digite os valores da Matriz B\n");
  matrizB = malloc_Matriz(matrizB, m, n);
  input_Value_Mat(matrizB, m, n);

  matrizC = dividir(matrizA, matrizB, m, n);
  print_mat(matrizC, m, n);

  return 0;
}

//funções
float **dividir(float ** matrizA, float ** matrizB, int x, int y){
  float ** matrizdiv;
  matrizdiv = malloc_Matriz(matrizdiv, x, y);

  for(int i = 0; i < x; i++)
    for(int j = 0; j < y; j++)
        matrizdiv[i][j] = matrizA[i][j] / matrizB[i][j];

  return matrizdiv;
}

void input_Value_Mat(float ** matriz, int k, int l){
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("Digite mat[%i][%i]: ", (i+1), (j + 1));
      scanf("%f", &matriz[i][j]);
    }
  }
}

float ** malloc_Matriz(float ** matriz, int k, int l){
  matriz = (float **) malloc(m * sizeof(float*));
  for(int i = 0; i < k; i++)
    matriz[i] = (float *) malloc(l * sizeof(float));

  return matriz;
}

void print_mat(float **matriz, int k, int l){
  for(int i = 0; i < k; i++){
    for(int j = 0; j < l; j++){
      printf("%f ", matriz[i][j]);
    }
    printf("\n");
  }
}
