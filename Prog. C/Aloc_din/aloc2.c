#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *criar(int *size){
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    *size = tam;
    int *p = malloc(sizeof(int) * tam);
    return p;
}

void fill(int *vetor,int tam){
    srand(time(NULL));
    for(int i=0; i<tam;i++){
        vetor[i] = rand() % 30;
        printf(" %d",vetor[i]);
    }
}

int main(){
    srand(time(NULL));
    int tam;
    int *vetor;
    int *vetor1;
    int new_value;
    vetor = criar(&tam);
    fill(vetor,tam);

    printf("\nQual o novo valor para o vetor? ");
    scanf("%d",&new_value);
    vetor1 = realloc(vetor,new_value*sizeof(int));
    if(vetor != NULL){
        vetor = vetor1;
    }



    for(int i=tam; tam<new_value;tam++){
        vetor[tam] = rand() % 30;
    }
    for(int j=0; j<new_value;j++){
        printf(" %d",vetor[j]);
    }

    printf("\n");
}