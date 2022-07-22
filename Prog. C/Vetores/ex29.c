#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 5
#define n 5


int main(){

    int matrix[m][n];
    int v[5];
    int v2[5];
    int maior = 0;
   long int menor = 9999999999999999;

    srand(time(NULL));
    for (int i=0; i< m; i++){
        for(int j=0; j<n; j++){
            matrix[i][j] = rand() % 100;
        }
    }
///////////------------------------------------------------//////////
    for(int i=0; i<m;i++){
        if(matrix[i][0] > maior){
            maior = matrix[i][0];
        }
        if(matrix[i][0] < menor){
            menor = matrix[i][0];
        }

        v[0] = maior;
        v2[0] = menor;
    }

 maior=0; menor = 1000000000;
    for(int i=0; i<m;i++){
        if(matrix[i][1] > maior){
            maior = matrix[i][1];
        }
        if(matrix[i][1] < menor){
            menor = matrix[i][1];
        }

        v[1] = maior;
        v2[1] = menor;
    }

 maior=0; menor = 1000000000;
 for(int i=0; i<m;i++){
        if(matrix[i][2] > maior){
            maior = matrix[i][2];
        }
           if(matrix[i][2] < menor){
            menor = matrix[i][2];
        }

        v[2] = maior;
        v2[2] = menor;
    }

 maior=0; menor = 1000000000;
 for(int i=0; i<m;i++){
        if(matrix[i][3] > maior){
            maior = matrix[i][3];
        }
           if(matrix[i][3] < menor){
            menor = matrix[i][3];
        }

        v[3] = maior;
        v2[3] = menor;
    }


 maior=0; menor = 1000000000;
 for(int i=0; i<m;i++){
        if(matrix[i][4] > maior){
            maior = matrix[i][4];
        }
           if(matrix[i][4] < menor){
            menor = matrix[i][4];
        }

        v[4] = maior;
        v2[4] = menor;
    }



///-------Printando A Matrix----------
for(int k=0; k<m;k++){
    printf("\n");
    for(int l=0;l<n;l++){
        printf("\t%d", matrix[k][l]);
    }
}
printf("\n\n");

//--------PRINTANDO O V1----------
for(int p=0; p<5;p++){
    printf("\t[%d]",v[p]);
}
printf("\n\n");
///--------Printando o V2---------
for(int t=0; t<5;t++){
    printf("\t[%d]",v2[t]);
}





    printf("\n");
    return 0;
}