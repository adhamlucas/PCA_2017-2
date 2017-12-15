#include <stdio.h>

#define pi 3.14

void clac_esfera(float r, float *area, float *volume){
  *area = pi * r * r;
  *volume = (4 * pi * (r * r * r)) / 3;
}


int main(){
  float raio, area, volume;

  printf("Digite o valor do raio: ");
  scanf("%f", &raio);

  clac_esfera(raio, &area, &volume);

  printf("Area: %.2f\nVolume: %.2f\n", area, volume);

  return 0;
}
