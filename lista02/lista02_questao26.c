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

void verificarMatrizTriangular(float ** matriz, int m, int n){
  int cond = 0;

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(j > i){
        if(matriz[i][j] == 0)
          cond = 1;
        else{
          printf("Não é uma matriz triangular\n");
          cond = 0;
          i = m;
          j = n;}
      }
    }
  }

  if(cond)
    printf("Matriz Triangular\n");
}


int main(){
  float ** matriz;
  int m, n;

  printf("Digite o tamanho da matriz: ");
  scanf("%i %i", &m, &n);

  matriz = mallocMatriz(m, n);
  lerNumerosMatriz(matriz, m, n);
  printMatriz(matriz, m, n);
  verificarMatrizTriangular(matriz, m, n);

  return 0;
}
