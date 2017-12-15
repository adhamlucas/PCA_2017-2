#include <stdio.h>
#include <string.h>

#define TAMFRASE 120

void substituir(char *frase, char * subcadeiaAntiga, char * subcadeiaNova);

int main(){
  char frase[TAMFRASE];
  char subcadeiaAntiga[TAMFRASE], subcadeiaNova[TAMFRASE];

  printf("Digite a frase: ");
  scanf(" %[^\n]", frase);
  printf("Digite a subcadeia a ser alterada: ");
  scanf(" %[^\n]", subcadeiaAntiga);
  printf("Digite a nova subcadeia a ser inserida: ");
  scanf(" %[^\n]", subcadeiaNova);

  printf("%s\n", frase);
  
  substituir(frase, subcadeiaAntiga, subcadeiaNova);

  printf("%s\n", frase);

  return 0;
}

void substituir(char *frase, char * subcadeiaAntiga, char * subcadeiaNova){
  char * endereco = NULL;

  if(strstr(frase, subcadeiaAntiga) == NULL){
    printf("Subcadeia a ser substituída não encontrada\n");
    exit(1);
  }
  else if(strlen(subcadeiaAntiga) != strlen(subcadeiaNova)){
    printf("Palavra a ser inserida tem tamanho diferente da palavra a ser trocada\n");
    exit(1);
  }
  else{
    endereco = strstr(frase, subcadeiaAntiga);
    for(int i = 0; i < strlen(subcadeiaNova); i++){
      endereco[i] = subcadeiaNova[i];
      printf("Troca = (%i)%s\n", (i+1), endereco);
    }

  }

}
