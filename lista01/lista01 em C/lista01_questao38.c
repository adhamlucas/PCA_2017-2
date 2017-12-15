#include <stdio.h>
#include <math.h>

int main(){
  int number, limite1, limite2, quociente1, quociente2;
  int divisor1, divisor2, soma1, soma2, i, j, m, n;

  printf("Digite number:\n");
  scanf("%i", &number);

  for(i = 1; i <= number; ++i){
      soma1 = 0;
      limite1 = sqrt(i);
      divisor1 = i;
      // printf("number %i\t", i);
      // printf("Limite %i\n", limite1);
      for(m = 1; m <= limite1; ++m){
          if (!(i % m)){
            quociente1 = i / m;
            if(quociente1 != m)
              soma1 += m + quociente1;
            else
              soma1 += m;
          }
      }

      soma1 -= i;

      limite2 = sqrt(soma1);
      soma2 = 0;

      for(n = 1; n <= limite2; ++n){
        if (!(soma1 % n)){
          quociente2 = soma1 / n;
          if(quociente2 != n)
            soma2 += n + quociente2;
          else
            soma2 += n;
        }
      }
      soma2 -= soma1;

      if(i == soma2 && i != soma1)
          printf("%i e %i\n", i, soma1);
  }

  return 0;
}
