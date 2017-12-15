#include <stdio.h>
#include <stdlib.h>

void verifPalindromo(int  * vetor, int tamVetor);

int main(){
  int *vetor, tamVetor;

  printf("Digite o tamanho do vetor: ");
  scanf("%i", &tamVetor);

  vetor = (int *) malloc(tamVetor * sizeof(int));

  for(int i = 0 ; i < tamVetor; i++){
    printf("vetor[%i]: ", (i+1));
    scanf("%i", &vetor[i]);
  }

  verifPalindromo(vetor, tamVetor);

  free(vetor);
  return 0;
}

void verifPalindromo(int *vetor, int tamVetor){
  int n = tamVetor / 2;
  int cond;

  for(int i = 0; i < n; i++)
    if(vetor[i] == vetor[tamVetor - 1 - i])
      cond = 1;
    else{
      printf("O vetor não é um palíndromo!\n" );
      i = n;
      cond = 0;
    }

    if(cond)
      printf("O vetor é um palíndromo!\n");
}
