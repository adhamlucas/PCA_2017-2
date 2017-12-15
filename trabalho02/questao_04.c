#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAMNOME 120

char * pegarSobrenome(char *nome);
char * pegarPrimeiroNome(char * nome);
char * pegarNomeCompanhia(char * nome);

int main(){
  char nome[TAMNOME], *nomeCompanhia = NULL;

  printf("Digite um nome: ");
  scanf(" %[^\n]", nome);

  nomeCompanhia = pegarNomeCompanhia(nome);

  printf("%s\n", nomeCompanhia);

  free(nomeCompanhia);

  return 0;
}


char * pegarNomeCompanhia(char *nome){
  char * nomeCompanhia = NULL, *sobrenome = NULL, *primeiroNome = NULL;
  int tamNome;

  sobrenome = pegarSobrenome(nome);
  primeiroNome = pegarPrimeiroNome(nome);

  tamNome = strlen(sobrenome) + strlen(primeiroNome);

  nomeCompanhia = (char *) malloc(tamNome * sizeof(char));
  if(nomeCompanhia == NULL){
    printf("Erro na alocação de memória (nomeCompanhia)\n");
    exit(1);
  }

  strcpy(nomeCompanhia,sobrenome);

  nomeCompanhia[strlen(sobrenome)] = '/';

  strcat(nomeCompanhia, primeiroNome);

  free(sobrenome);
  free(primeiroNome);

  return nomeCompanhia;
}

char * pegarSobrenome(char *nome){
  char * sobrenome = NULL, *sobrenomeVerdadeiro = NULL;
  int tamNome = strlen(nome);

  for(int i = (tamNome - 1) ; i > 0; i--){
    if(nome[i] == ' '){
      sobrenome = (nome + i + 1);
      i = 0;
    }
  }
  sobrenomeVerdadeiro = (char *) malloc(strlen(sobrenome) * sizeof(char));
  if(sobrenomeVerdadeiro == NULL){
    printf("Erro na alocação de memória(sobrenomeVerdadeiro)\n");
    exit(1);
  }

  strcpy(sobrenomeVerdadeiro, sobrenome);

  return sobrenomeVerdadeiro;
}

char * pegarPrimeiroNome(char * nome){
  char * primeiroNome = NULL;
  int count = 0;

  while(nome[count] != ' ')
    count++;

  primeiroNome = (char *) malloc((count + 1) * sizeof(int));
  if(primeiroNome == NULL){
    printf("Erro na alocação de memória (primeiroNome)\n");
    exit(1);
  }

  for(int i = 0; i < count; i++){
    primeiroNome[i] = nome[i];
  }

  primeiroNome[count] = '\0';

  return primeiroNome;
}
