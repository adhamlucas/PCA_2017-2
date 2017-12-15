#include <stdio.h>
#include <stdlib.h>

int qtdResposta = 50;

void lerNumerosVetor(int *vetor){
    for(int i = 0; i < qtdResposta; i++){
        printf("Digite o %i resposta: ", (i+1));
        scanf("%i",&vetor[i]);
    }
}

int * mallocVetor(){
    int * vetor = (int *) malloc(qtdResposta * sizeof(int));
    return vetor;
}

int correcao(int *gabarito, int * cartaoRespota){
  int resultado = 0;

  for(int i = 0; i < qtdResposta; i++){
    if(gabarito[i] == cartaoRespota[i])
      resultado += 1;
  }

  return resultado;
}


int main(){
  int * gabarito, * cartaoResposta;
  int acertos;
  gabarito = mallocVetor();
  cartaoResposta = mallocVetor();

  printf("Digite as respotas do gabarito\n");
  lerNumerosVetor(gabarito);
  printf("Digite o cartão resposta\n");
  lerNumerosVetor(cartaoResposta);

  acertos = correcao(gabarito, cartaoResposta);

  printf("A quantidade de acertos do cartão Resposta foi: %i\n", acertos);

  free(gabarito);
  free(cartaoResposta);

  return 0;
}
