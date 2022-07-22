#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
    char vetor[53];
    fgets(vetor,50,stdin);
    int cont=0;
    int position =1;

    //Crio um vetor auxiliar:
    int *vet_letras = malloc(sizeof(int) * 26);
    memset(vet_letras,-1,26); //Coloco -1 nas 26 posições
    vet_letras[0] = 0;

    for(int i=0; vetor[i] != '\0'; i++){
        if(vetor[i] == ' ')
            vet_letras[position] = i+1;
            position++;

    }

    for(int k=0; vet_letras[k] != -1;k++){
        while(vetor[vet_letras[k]] == vetor[vet_letras[k+1]])
            k++;
            cont++;
    }


    free(vet_letras);
    printf("%d",cont);
    printf("\n");
}


