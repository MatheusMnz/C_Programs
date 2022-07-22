#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copia(char* origem, char* destino);

int main(){
    char origem[30];
    char destino[30];


    printf("Digite sua string: ");
    fgets(origem,30,stdin);

    //Serve para tirar o enter do vetor
    char *p = strchr(destino, '\n');
    if (p){
        *p = '\0';
    }
    copia(origem,destino);


    printf("\n");

}

void copia(char* origem, char* destino){
    for(int i=0; i< strlen(origem);i++){
        destino[i] = origem[i];
    }

    //Serve para tirar o enter do vetor
    char *p = strchr(destino, '\n');
    if (p){
        *p = '\0';
    }
    printf("Vetor destino é: %s",destino);
}