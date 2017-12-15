#include <stdio.h>
#include <stdlib.h>

#define TAMLINHA 50

float mediaAlunos();
float somarNotaAluno(int * qtdAluno);

int main(){
  float media;

  media = mediaAlunos();

  printf("media = %.2f\n", media);

  return 0;
}


float mediaAlunos(){
  int qtdAluno = 0;
  float soma, media;

  soma = somarNotaAluno(&qtdAluno);
  media = soma / qtdAluno;

  return media;
}

float somarNotaAluno(int * qtdAluno){
  char nomeArquivo[50];
  char linha[TAMLINHA + 1];
  char nomeAluno[TAMLINHA];
  float notaAluno, soma = 0;

  printf("Digite o nome do arquivo: ");
  scanf(" %s", nomeArquivo);

  FILE * notas = fopen(nomeArquivo, "rt");
  if(notas == NULL){
    printf("Erro ao abrir o arquivo!\n");
    exit(1);
  }

  while(fgets(linha, TAMLINHA, notas)){
    sscanf(linha, " %[^0123456789] %f", nomeAluno, &notaAluno);
    soma += notaAluno;
    *qtdAluno += 1;
  }

  return soma;
}
