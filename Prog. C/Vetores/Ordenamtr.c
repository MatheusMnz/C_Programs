#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 5
#define n 5

void exibir(int mtr[m][n]);
void ordena(int mtr[m][n]);

int main(){
    srand(time(NULL));
    int mtr[m][n];


    //Preenchendo a matriz
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
             mtr[i][j] = rand() % 20;
        }
    }


    //Printando 
    exibir(mtr);
    printf("\n");
    //Ordernando
    ordena(mtr);
    exibir(mtr);


    printf("\n");
}

void exibir(int mtr[m][n]){
    for(int i=0;i<m;i++){
        printf("\n");
        for(int j=0;j<n;j++){
            printf("\t%d",mtr[i][j]);
        }
    }
}

void ordena(int mtr[m][n]){
    int aux;
    int cont;
    for(int i=0; i<m;i++){ //For pra Variar Linhas
        for(int j=0; j<n; j++){ // For para Variar colunas
            for(int k=i; k<m;k++){
                if(k == i){
                    cont = j+1; //cont = 1;
                }else{
                    cont=0; //
                }
                for(cont; cont < n; cont++){
                    if(mtr[i][j] > mtr[k][cont]){ 
                        aux = mtr[i][j];
                        mtr[i][j] = mtr[k][cont];
                        mtr[k][cont] = aux;
                    }
                }
            }
        }
    }
}
