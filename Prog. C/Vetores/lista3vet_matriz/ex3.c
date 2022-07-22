#include <stdio.h>
#include <stdlib.h>

int main(){
    int tests;
    char vetorA[1000];
    char vetorB[1000];


    printf("Quantos casos de teste? ");
    scanf("%d",&tests);
    getchar();

    for(int cont=0; cont<tests; cont++){
        //variables
        int tam_veta=0; int tam_vetb=0;
        int cont=0; int cont_ciclos=1;



        printf("\nInsert a number: ");
        fgets(vetorA,100,stdin);
        printf("\nInsert another number: ");
        fgets(vetorB,100,stdin);
        
        for(int k=0;vetorA[k] != '\0'; k++){
            tam_veta++;
        }

        for(int l=0;vetorB[l] != '\0'; l++){
            tam_vetb++;
        }

        int aux=tam_vetb;
        int aux2=tam_veta;

        while(1){
            if(vetorA[aux2-1] == vetorB[aux-1]){
                cont++;
            }
            aux2--; aux--;
            if(aux == 0)
                break;
        }

        if(cont == tam_vetb){
            printf("\nEncaixa");
        } else {
            printf("\nNao encaixa");
        }

    }


    return 0;
}