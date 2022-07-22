#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *criar(int *strtam){
    int size;
    printf("\nInsert a size of array: ");
    scanf("%d", &size);
    int *str = malloc(size * sizeof(int));
    *strtam=size;
    return str;
}


void fill_vec(int *vet, int tam_vec){
    for(int i=0; i<tam_vec;i++){
        vet[i] = rand() % 30;
        printf(" %d",vet[i]);
    }
} 

void calc(int *v, int num, int *xmin, int *xmax){
    int maior=0;
    int menor=999;
    for(int i=0; i<=num;i++){
        if(v[i] > maior){
            maior = v[i];
            *xmax = maior;
        }
        if(v[i]<menor){
            menor = v[i];
            *xmin=menor;
        }
    }
}


int main (){
    srand(time(NULL));
    int xmax; int tam;
    int xmin;  
    int *vector;
    int sizee=0;


    vector = criar(&tam);
    fill_vec(vector,tam);

    printf("\nAté que posição vc deseja verificar (0 a %d): ",tam-1);
    scanf("%d",&sizee);
    while(sizee > tam){
        printf("\nAté que posição vc deseja verificar (0 a %d): ",tam-1);
        scanf("%d",&sizee);
    }

    calc(vector,sizee,&xmin,&xmax);
    printf("\nxmax = %d",xmax);
    printf("\nxmin = %d",xmin);
    printf("\n");
}