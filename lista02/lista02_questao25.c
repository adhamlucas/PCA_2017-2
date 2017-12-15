#include <stdio.h>
#include <stdlib.h>

void lerNumerosMatriz(float **matriz, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
          printf("Digite matriz[%i]][%i]:\n", (i + 1), (j + 1));
          scanf("%f", &matriz[i][j]);
        }
    }
}

float **mallocMatriz(int m, int n){
    float ** matriz = (float **) malloc(m * sizeof(float*));
    for(int i = 0; i < m; i++)
      matriz[i] = (float*) malloc(n * sizeof(float));

    return matriz;
}

float **transposicaoMatriz(float **matriz, int m, int n){
  float **transposta = mallocMatriz(m, n);

  for(int i = 0; i< m; i++)
    for(int j = 0; j < n; j++)
      transposta[j][i] = matriz[i][j];

  return transposta;
}

void printMatriz(float ** matriz, int m, int n){
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(j < (n-1))
        printf("%.2f ", matriz[i][j]);
      else
        printf("%.2f\n", matriz[i][j]);
    }

  }
}

int main(){
  float ** matriz, **transposta;
  int m, n;

  printf("Digite os valores de m e n: ");
  scanf("%i %i", &m, &n);

  matriz = mallocMatriz(m, n);

  lerNumerosMatriz(matriz, m, n);
  printf("Matriz lida\n");
  printMatriz(matriz, m, n);

  transposta = transposicaoMatriz(matriz, m, n);

  printf("Matriz Transposta\n");
  printMatriz(transposta, m, n);

  free(transposta);
  free(matriz);

  return 0;
}
