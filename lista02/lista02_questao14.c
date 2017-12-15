#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lerCordVetor(float *vetor, int tamVetor);
float * mallocVetor(int tamVetor);
float produtoEscalarVetor(float *vetor1, float *vetor2, int tamVetor);


int main()
{
    float *vetor1, * vetor2;
    int tamVetor;
    float produtoEscalar;

    printf("Digite a que R o vetor pertence: ");
    scanf("%i", &tamVetor);

    vetor1 = mallocVetor(tamVetor);
    vetor2 = mallocVetor(tamVetor);

    printf("Digite as coordenadas do vetor1\n");
    lerCordVetor(vetor1, tamVetor);
    printf("Digite as coordenadas do vetor2\n");
    lerCordVetor(vetor2, tamVetor);

    produtoEscalar = produtoEscalarVetor(vetor1, vetor2, tamVetor);

    printf("Produto escalalar do vetor 1 pelo vetor2: %.2f\n", produtoEscalar);

    free(vetor1);
    free(vetor2);


    return 0;
}


void lerCordVetor(float *vetor, int tamVetor){
    for(int i = 0; i < tamVetor; i++){
        printf("Digite a %i coordeanada:", (i+1));
        scanf("%f",&vetor[i]);
    }
}

float * mallocVetor(int tamVetor){
    float * vetor = (float *) malloc(tamVetor * sizeof(float));
    return vetor;
}

float produtoEscalarVetor(float *vetor1, float *vetor2, int tamVetor){
    float produto = 0;
    for(int i = 0; i < tamVetor; i++){
        produto += (vetor1[i] * vetor2[i]);
    }
    return produto;
}
