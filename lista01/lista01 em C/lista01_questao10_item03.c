#include <stdio.h>


int simplificar_fracao(int numerador, int donominador);

int main(){
  int a,b, m,n, numerador, denominador, mmc;
  
  printf("Digite os valores da fração: a/b e m/n\n");
  printf("Digite o valor do númerador a: ");
  scanf("%i", &a);
  printf("Digite o valor do denominado b: ");
  scanf("%i", &b);
  printf("Digite o valor do númerador m: ");
  scanf("%i", &m);
  printf("Digite o valor do denominador n: ");
  scanf("%i", &n);

  numerador = (a * n) + (m * b);
  denominador = b * n;

  simplificar_fracao(numerador, denominador);
}


int simplificar_fracao(int numerador, int denominador){
  int i, simplificador;

  if(numerador >= denominador){
    for(i = 2; i <= numerador; ++i){
      if(!(numerador % i) && !(denominador % i)){
        simplificador = i;
      }
    }
  }

  else{
    for(i = 2; i <= denominador; ++i){
      if(!(numerador % i) && !(denominador % i)){
        simplificador = i;
      }
    }
  }

  numerador = numerador / simplificador;
  denominador = denominador / simplificador;

  printf("%i\n", numerador);
  printf("--\n");
  printf("%i\n", denominador);
}
