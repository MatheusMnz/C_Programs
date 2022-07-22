#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 5
#define n 5

void exibir(int mtr[m][n]);
void ordena(int mtr[m][n]);
void repetidos(int mtr[m][n]);
int maior(int mtr[m][n]);

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
    //Tira os números repetidos 
    repetidos(mtr);
    printf("\n");
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
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            for(int lin=0; lin<m;lin++){
                for(int col=0;col<n;col++){
                    if(mtr[i][j] < mtr[lin][col]){
                        aux = mtr[i][j];
                        mtr[i][j] = mtr[lin][col];
                        mtr[lin][col] = aux;
                    }
                }
            }
        }
    }
}

int maior(int mtr[m][n]){
    int maior = 0;
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            if(mtr[i][j] > maior)
                maior = mtr[i][j];
        }
    }
    return maior;
}

void repetidos(int mtr[m][n]){
    int resp = maior(mtr);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            for(int k=m; k>=0;k--){
                for(int l=n;l>=0;l--){
                    if(mtr[i][j] == mtr[k][l]){
                        printf("\n");
                        exibir(mtr); getchar();
                        mtr[k][l] = resp + 1;
                        resp++;
                    }
                }
            }
        }
    }
    

}