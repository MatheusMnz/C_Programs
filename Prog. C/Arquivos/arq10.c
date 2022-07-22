#include <stdio.h>
#include <stdlib.h>

int main(){
    int len=0;
    FILE  *fp = fopen("Notas.txt","r");


    if(fp == NULL){
        printf("Erro na abertura do arquivo.");
        exit(1);
    }

    int *v = malloc(sizeof(int) * 1);
    for(int i=0; fscanf(fp,"%d\n",&v[i]) != EOF; i++){
        v=realloc(v,(i+1) * sizeof(int));
        len++;
    }

    int maior = v[0], menor = v[0], cont=0;
    for(int i=0; i<len;i++){
        if(v[i] > maior)
            maior = v[i];
        if(v[i] < menor)
            menor = v[i];
        if(v[i] >= 60)
            cont++;
    }

    printf("Maior: %d   Menor: %d   Aprovados: %d",maior,menor,cont);


    printf("\n");
}