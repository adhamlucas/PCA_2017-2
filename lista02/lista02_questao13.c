#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lerCordVetor(float *vetor, int tamVetor);
float normaVetor(float *vetor, int tamVetor);

int main()
{
    float *vetor;
    int tamVetor;
    float norma;

    printf("Digite a que R o vetor pertence: ");
    scanf("%i", &tamVetor);

    vetor = (float*) malloc(tamVetor * sizeof(float));

    lerCordVetor(vetor, tamVetor);
    norma = normaVetor(vetor, tamVetor);

    free(vetor);

    printf("Norma do vetor dado: %.2f\n", norma);


    return 0;
}

void lerCordVetor(float *vetor, int tamVetor){
    for(int i = 0; i < tamVetor; i++){
        printf("Digite a %i coordeanada:", (i+1));
        scanf("%f",&vetor[i]);
    }
}


float normaVetor(float *vetor, int tamVetor){
    float soma = 0;
    for(int i = 0; i < tamVetor; i++)
        soma += (vetor[i] * vetor[i]);

    return sqrt(soma);
}
