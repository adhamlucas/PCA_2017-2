#include <stdio.h>

void print_Inverse_Vetor(int *vet, int tam){
  for(int i = tam - 1; i >= 0; --i)
    printf("%i\n", *(vet+i));
}

int main(){
  int tam, vet[100];

  printf("Digite o tamanho do vetor: ");
  scanf("%i", &tam);

  for(int i = 0; i < tam; ++i){
    printf("Digite vet[%i]: ", i + 1);
    scanf("%i", &vet[i]);
  }

  print_Inverse_Vetor(vet, tam);

  return 0;
}
