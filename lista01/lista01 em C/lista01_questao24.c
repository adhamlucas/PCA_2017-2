#include <stdio.h>

int main(){
  float nota1, nota2, necessary_note, pf, soma;

  printf("Digite a nota1: ");
  scanf("%f", &nota1);
  printf("Digite a nota2: ");
  scanf("%f", &nota2);

  soma = nota1 + nota2;

  if(soma >= 18) printf("Você já conseguiu a nota necessária\n");

  else{
    necessary_note = 18 - soma;
    printf("A nota necessária para ser aprovado: %.2f\n", necessary_note);
  }
}
