#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 12

int sum(int matriz[m][m], int p);
float media(float out, int numeros);

int main(){
    char choice;
    int matrix[m][m];
    int out;
    float media_final=0.0;
    printf("SOMA = (S) - MEDIA(M): ");
    scanf("%c",&choice);
    srand(time(NULL));

///Gerando Matriz aleatória
for(int i=0; i<m;i++){
    for(int j=0;j<m;j++){
        matrix[i][j] = rand() % 100;
    }
}

//PRINTANDO MATRIZ
for(int i=0; i<m;i++){
    printf("\n");
    for(int j=0;j<m;j++){
        printf("\t%d",matrix[i][j]);
    }
}
//---------------------------------------------------///
    switch (choice){
        case 'S':
            out = sum(matrix,12);
            printf("\nA soma é %d", out);
            break;
        case 'M':
            out = sum(matrix,12);
            printf("\nvalor da soma: %d",out);
            media_final = media(out,30);
            printf("\nMedia final é : %.5f", media_final);
            break;
    }


    printf("\n");
    return 0;
}

int sum(int matrix[m][m],int u){
    printf("\n");
    printf("\n");

    int aux=0;
    int soma =0;
    for(int i=0; i<5;i++){
        printf("\n");
        aux = i;
        for(int j=aux+1;j<(m-aux)-1;j++){
            soma += matrix[i][j]; 
            printf("\t%d",matrix[i][j]);
        }
    }
    return soma;
}

float media(float out, int numeros){
    float vf;
    vf = (float)(out/numeros);
    return vf;
}