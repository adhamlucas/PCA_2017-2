#include <stdio.h>

int soma_impares(int n){
    return n * n;
}

int main(){
    int number, soma;

    printf("Digite um número: ");
    scanf("%i", &number);

    soma = soma_impares(number);

    printf("A soma dos %i números ímpares: %i\n", number, soma);

    return 0;
}
