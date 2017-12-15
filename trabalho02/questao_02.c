#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMPALAVRA 50

int ehPalindroma(char* palavra, int esq, int dir) {
  if (esq >= dir) {
    return 1;
  } else if (palavra[esq] == palavra[dir]) {
    return ehPalindroma(palavra, esq+1, dir-1);
  } else {
    return 0;
  }
}

int main(){
  char palavra[TAMPALAVRA];
  scanf("%s", palavra);

  if (ehPalindroma(palavra, 0, strlen(palavra)-1)) {
    printf("Sim!\n");
  } else {
    printf("Nao!\n");
  }

  return 0;
}
