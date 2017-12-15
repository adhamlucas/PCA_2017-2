#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *infoCandidatos(int *numberCandidatos);
void inputInfoCandidatos(char *string, int qtdCandidatos);
int *copyNumCandidatos(char *info, int qtdCandidatos, int tamVet);
char **copyNames(char *infoCandidatos, int qtdCandidatos);
char **storageApelidos(char ** nomes, int qtdCandidatos);
char *apelido(const char *nome);
int *inputVoto(int *size);
int menu();
int *reallocUrna(int *urna, int size);
char *contagem(char **apelidos, int *numCand, int *urna, int qtdCand, int sizeUrn);
int contabilidarVotos(const int *URNA, const int numeroCandidato);
int *eleicao(const int *numCandidatos);
int conversionNumString(int n, char *resultado);

int main(){
  char *infCandidatos, **names, **apelidos;
  int *NUM_CANDIDATOS, qtdCandidatos, *URNA, sizeUrna = 1;

  infCandidatos = infoCandidatos(&qtdCandidatos);
  NUM_CANDIDATOS = copyNumCandidatos(infCandidatos, qtdCandidatos, strlen(infCandidatos));
  names = copyNames(infCandidatos, qtdCandidatos);
  apelidos = storageApelidos(names, qtdCandidatos);
  URNA  = inputVoto(&sizeUrna);
  // system("clear"); Limpar a tela -- usar futuramente


  //Exemplo para mostrar o que está em apelidos para 3 candidatos
  printf("---------\n");
  for(int i = 0; i < 3; i++)
    printf("Apelido[%i] = %s\n", i, apelidos[i]);
  //Exemplo para mostrar o que está na URNA sendo feitos 5 votos
  for(int i = 0; i < 5; i++)
    printf("URNA[%i] = %i\n", i, URNA[i]);

  return 0;
}


char *infoCandidatos(int *numberCandidatos){
  int tamString;
  char *info_Candidatos;

  printf("Quantidade de candidatos: ");
  scanf("%i", numberCandidatos);

  info_Candidatos = (char*) malloc(*numberCandidatos * 30 *sizeof(char));

  inputInfoCandidatos(info_Candidatos, *numberCandidatos);

  tamString = strlen(info_Candidatos); // Por enquanto para teste

  //Para imprimir o vetor que é feito no formato de c)
  printf("\n");
  for(int i = 0;i < tamString;i++)
    printf("%c", info_Candidatos[i]);
  printf("\n\n");

  return info_Candidatos;
}

void inputInfoCandidatos(char *string, int qtdCandidatos){
  printf("Digite as informações dos candidatos\n");

  for(int i = 1; i <= qtdCandidatos;i++){
    if(i < qtdCandidatos){
      scanf(" %[^\n]", &string[strlen(string)]);
      string[strlen(string)] = '/';
    }
    else
      scanf(" %[^\n]", &string[strlen(string)]);
  }
}

int * copyNumCandidatos(char *info, int qtdCandidatos, int tamVet){
  int * numCandidato = (int *) malloc(qtdCandidatos * sizeof(int));
  int posi = 0;

  for(int i = 0; i < qtdCandidatos; i++){
    for(int j = posi; j < tamVet; j++){
      if(info[j] >= 48 && info[j] <= 57){
        numCandidato[i] = ((info[j] - 48) * 10) + (info[j + 1] - 48);
        posi = j+2;
        j = tamVet;
      }
    }
  }

  return numCandidato;
}

char **copyNames(char *infoCandidatos, int qtdCandidatos){
  char ** names;
  int posi, tamVet;
  posi = 0;
  tamVet = strlen(infoCandidatos);

  names = (char **) malloc(qtdCandidatos * sizeof(char *));
  for(int i = 0; i < qtdCandidatos; i++)
    names[i] = (char*) malloc(30 * sizeof(char));

  for(int i = 0; i < qtdCandidatos; i++){
    for(int j = posi, k = 0; j < tamVet; j++, k++){
      if(infoCandidatos[j] != ','){
        names[i][k] = infoCandidatos[j];
      }
      else{
        names[i][k] = '\0';
        posi = j + 5;
        j = tamVet;
      }
    }
  }

  return names;
}

char **storageApelidos(char ** names, int qtdCandidatos){
  char **apelidos = (char **) malloc(qtdCandidatos * sizeof(char*));

  for(int i = 0; i < qtdCandidatos; i++){
    apelidos[i] = apelido(names[i]);
  }

  return apelidos;
}

char *apelido(const char *nome){
  char *apelido = (char*) malloc(3 *sizeof(char));

  for(int i = 0; i < strlen(nome); i++){
    if(nome[i] >= 65 && nome[i] <= 90)
      apelido[strlen(apelido)] = nome[i];
  }
  apelido[2] = '\0';

  return apelido;
}

int *inputVoto(int * size){
  int cond = 1, cont = 0;
  int *vetUrna = (int *) malloc(sizeof(int));

  while(cond){
    vetUrna[cont] = menu();
    printf("Prosseguir eleição (00)Não--(01)Sim: ");
    scanf("%i", &cond);

    if(cond){
      vetUrna = reallocUrna(vetUrna, *size);
      *size++;
      cont++;
    }

  }

  return vetUrna;
}

int menu(){
  int voto;
  printf("Voto para Diretor\n");
  printf("Número: ");
  scanf("%i", &voto);

  return voto;
}

int *reallocUrna(int *urna, int size){
  urna = (int*) realloc(urna, (1 + size) * sizeof(int));

  return urna;
}


int *eleicao(const int *numCandidatos){
  int *urna;
  // urna = inputVoto();

  return urna;
}

char *contagem(char **apelidos, int *numCand, int *urna, int qtdCand, int sizeUrn){
  for(int i = 0; i < qtdCand; i++){

  }
}

int conversionNumString(int n, char * resultado){
  char c;

  if(n / 10 == 0){
    c = ((n %10) + 48);
    strcpy(resultado, &c);
    return 0;
  }

  else{
      conversionNumString(n / 10, resultado);
      c = ((n %10) + 48);
      strcpy(resultado, &c);
  }
}

/*
  123
  123 % 10 = 3
  123 // 10 = 12
  12 % 10 = 2
  12 // 10 = 1
  1 % 10 = 1
  1 // 10 = 0


*/
