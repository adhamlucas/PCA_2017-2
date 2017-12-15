#include <stdio.h>

int main(){
  float lado1, lado2, lado3;

  printf("Digite o comprimento dos lados do triângulo: ");
  scanf("%f %f %f", &lado1, &lado2, &lado3);

  if(lado1 == lado2 && lado1 == lado3){
    printf("O triângulo é equilatero\n");
  }
  else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
    printf("O triângulo é scaleno\n");
  }
  else if((lado1 == lado2) && lado1 != lado3){
    printf("O triângulo é isósceles\n");
  }
  else if(lado2 == lado3 && lado2 != lado1){
    printf("O triângulo é isósceles\n");
  }
  else if(lado1 == lado3 && lado1 != lado2){
    printf("O triângulo é isósceles\n");
  }

}
