//Gere um vetor aleatório,
//Ordene o vetor
//Substitua os números repetidos

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 20

void ordernar(int *vetor,int tam);


int main(){
    int vet[m];
    srand(time(NULL));

    for(int i=0; i<m;i++){
        vet[i] = rand() % 20;
    }

int maior=0;
    for(int i=0; i<m; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }

for(int k=m-1; k>0; k--){
    for(int j=0; j<k;j++){
        if(vet[k] == vet[j]){
            vet[k] = maior + 1;
            maior++;
        }
    }
}

for(int i=0; i<m;i++){
    printf(" %d",vet[i]);
}

ordernar(vet,m);
printf("\n");

for(int i=0; i<m;i++){
    printf(" %d",vet[i]);
}


printf("\n");
}


void ordernar(int *vetor,int tam){
    int aux;
    for(int k=m-1; k>0; k--){
        for(int j=0; j<k;j++){
            if(vetor[k] < vetor[j]){ 
            aux = vetor[k];
            vetor[k] = vetor[j];
            vetor[j] = aux;
            }
        }
    }
}

