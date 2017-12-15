#include <stdio.h>
#include <stdlib.h>

void ver_Simquad(int m, int n, int ** mat){
  int count = 0;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(mat[i][j] == mat[j][i])
        count += 1;
    }
  }
  if(count == m * n)
    printf("Matriz simétrica!:");
  else
    printf("Matris não simética!");
}

void input_Value_Mat(int ** mat, int m, int n){
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("Digite mat[%i][%i]: ",i,j);
      scanf("%i", &mat[i][j]);
    }
  }
}

int main(){
  int m, n;
  int ** matriz;

  printf("Digite a quantidade de linhas e colunas da matriz: ");
  scanf("%i %i", &m, &n);

  matriz = (int **) malloc(m * sizeof(int*));
  for(int i = 0; i < m; i++)
      matriz[i] = (int *) malloc(n * sizeof(int));

  input_Value_Mat(matriz, m,n);
  ver_Simquad(m, n,matriz);

  return 0;
}
