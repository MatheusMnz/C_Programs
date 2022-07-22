#include <stdlib.h>
#include <stdio.h>

int main(){
    int *notas, n, i;
    printf("Entre com o numero de elementos: ");
    scanf("%d", &n);
    //Alocando n posições de um inteiro para o vetor notas
    notas = (int*) malloc(n * sizeof(int));

    //Preenche
    for(int i=0; i< n; i++){
        notas[i] = rand() % 30;
    }

    //Mostra
    for(int j=0; j < n; j++){
        printf(" %d",notas[j]);
    }

    free(notas);
    printf("\n");
}