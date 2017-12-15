#include <stdio.h>

int main(){
  int i, a, q, Termo;
  for(i = 5; i > 0; i = i - 1){
    a = i;
    q = 3;
    Termo = a;

    while (Termo <= 9 * a){
      printf("%i\n", Termo);
      Termo = Termo * q;
    }
  }
}
