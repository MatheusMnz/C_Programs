#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *criar(int *size){
    int tam=0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    *size = tam;
    int *p = malloc(sizeof(int) * tam);
    return p;
}


 void fill(int *vetor,int tam){
    for(int i=0; i<tam;i++){
        vetor[i] = rand() % 30;
        printf(" %d",vetor[i]);
    }
 }

int *intersec(int *vetQ, int *vetR, int sizeR, int sizeQ, int *sizeW){
    int *w = (int*) malloc (1 * sizeof(int));
    int pos=0;
    for(int i=0; i<sizeQ;i++){
        for(int j=0; j<sizeR;j++){
            if(vetR[i] == vetQ[j]){
                w = (int *) realloc(w,(pos+1) * sizeof(int));
                w[pos] = vetR[i];
                pos++;
            }
        }
    }
    *sizeW = pos;
    return w;
}


int remove_num(int *vetor, int tam){
	int new_size_vet = tam;
	for(int i = 0; i < new_size_vet; i++ ){
        for(int j = i + 1; j < new_size_vet; ){
            if( vetor[j] == vetor[i] ){
                for(int k = j; k < new_size_vet; k++ )	
                    vetor[k] = vetor[k + 1];
               		 new_size_vet--;
               		
            }
            else{
                j++;
            }
        }
 	}
 	return new_size_vet;
}

int main(){
    srand(time(NULL));
    int *Q, *R, *W;
    int sizeQ, sizeR, sizeW;

    Q = criar(&sizeQ);
    R = criar(&sizeR);

    fill(Q,sizeQ);
    printf("\n");
    fill(R,sizeR);

    int new_SIZEQ = remove_num(Q,sizeQ);
    int new_SIZER = remove_num(R,sizeR);

    W = intersec(Q,R,new_SIZEQ,new_SIZER,&sizeW);

    printf("\n");
    for(int i=0; i<sizeW;i++){
        printf(" %d",W[i]);
    }
    
    printf("\n");
}