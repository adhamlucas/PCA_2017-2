#include <stdio.h>

int main(){
  int votos_83, votos_93, brancos, nulos, voto, eleicao, confirmacao;

  eleicao = 0;
  nulos = 0;
  votos_83 = 0;
  votos_93 = 0;
  brancos = 0;

  while(eleicao == 0){
    confirmacao = 1;

    while (confirmacao == 1){
      printf("Digite o voto para pridente: \n");
      printf("00 -- Branco\n");
      scanf("%i", &voto);

      if(voto != 0 && voto != 93 && voto != 83){
        printf("\nVoto nulo\n");
        printf("Confirma voto: sim-1 nao-0\n");
        scanf("%i", &confirmacao);
        if(confirmacao == 1){
          printf("Voto confirmado\n");
          nulos += 1;
        }
      }

      if(voto == 0){
        printf("\nVoto em branco\n");
        printf("Confirmar voto: som-1 nao-0\n");
        scanf("%i", &confirmacao);
        if(confirmacao == 1){
          printf("Voto confirmado\n");
          brancos += 1;
        }
      }

      if(voto == 93){
        printf("\nVoto em 93-Alcapone\n");
        printf("Confirmar voto: sim-1 nao-0\n");
        scanf("%i", &confirmacao);
        if(confirmacao == 1){
          printf("Voto confirmado\n");
          votos_93 += 1;
        }
      }

      if(voto == 83){
        printf("\nVoto em 83-Alibabá\n");
        printf("Confirmar voto : sim-1 nao-0\n");
        scanf("%i", &confirmacao);
        if(confirmacao == 1){
          printf("Voto confirmado\n");
          votos_83 += 1;
        }
      }

      if(confirmacao == 1){
        printf("\nEncerrar eleicao: sim-1, não-0\n");
        scanf("%i", &eleicao);
        if(eleicao == 1){
          confirmacao = 0;
          printf("Brancos: %i\n", brancos);
          printf("Nulos: %i\n", nulos);
          printf("Alibabá: %i\n", votos_83);
          printf("Alcapone: %i\n", votos_93);
          if(votos_83 > votos_93)
            printf("Alibabá eleito\n");
          else
            printf("Alcapone eleito\n");
        }
      }

    }
  }

  return 0;
}
