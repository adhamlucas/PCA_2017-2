#include <stdio.h>

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y){
  int cond_X, cond_Y;

  cond_X = (x0 < x && x < x1);
  cond_Y = (y0 < y && y < y1);

  if(cond_X && cond_Y)
    return 1;
  else
    return 0;
}

int main(){
  int x0, x , x1, y0, y, y1;

  printf("Digite os valores do vétice inferior (x, y): ");
  scanf("%i %i", &x0, &y0);
  printf("Digite os valroes do vértice superior(x,y): ");
  scanf("%i %i", &x1, &y1);
  printf("Digite os valors a serem analisados(x, y): ");
  scanf("%i %i", &x, &y);

  if(dentro_ret(x0, y0, x1, y1, x, y))
    printf("(%i, %i) está dentro do retângulo\n", x, y);
  else
    printf("(%i, %i) está fora do retângulo\n", x, y);

  return 0;

}
