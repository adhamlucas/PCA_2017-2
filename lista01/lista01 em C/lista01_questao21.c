#include <stdio.h>
#include <math.h>

int main(){
  int lado1, lado2, lado3, hipotenusa;

  printf("Digite os lados do triângulo(l1 l2 l3)\n");
  scanf("%i %i %i", &lado1, &lado2, &lado3);

  hipotenusa = lado1;

  if(hipotenusa < lado2) hipotenusa = lado2;
  if(hipotenusa < lado3) hipotenusa = lado3;

  if(hipotenusa == lado1){
    if(pow(hipotenusa,2) == pow(lado2, 2) + pow(lado3, 2)){
      printf("Hipotenusa: %i\n", hipotenusa);
      printf("Cateto: %i\n", lado2);
      printf("Cateto: %i\n", lado3);
    }
  }

  else if(hipotenusa == lado2){
    if(pow(hipotenusa,2) == pow(lado1,2) + pow(lado3,2)){
      printf("Hipotenusa: %i\n", hipotenusa);
      printf("Cateto: %i\n", lado1);
      printf("Cateto: %i\n", lado3);
    }
  }
  else if(hipotenusa == lado3){
    if(pow(hipotenusa,2) == pow(lado1,2) + pow(lado2, 2)){
      printf("Hipotenusa: %i\n", hipotenusa);
      printf("Cateto: %i\n", lado1);
      printf("Cateto: %i\n", lado2);

    }
  }


}
