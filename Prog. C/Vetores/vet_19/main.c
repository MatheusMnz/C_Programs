#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void quick(char *vetor, int first, int end);
int dividir(char *vetor, int first, int end);

int main(){
    char vetor[30];
    int tam=0;

    printf("Digite a string: ");
    fgets(vetor,30,stdin);
    char *p = strchr(vetor,'\n');
    if(p){
        *p = '\0';
    }

	for(int i=0; vetor[i] != '\0'; i++){
		tam++;
	}	
	printf("Input String [%d] : %s \n",tam,vetor);
	quick(vetor,0,tam-1);
	// vetor[tam] = '\0';

	printf(" String Organizada : %s \n",vetor);
}


void quick(char *vetor, int first, int end){
	int pivot;
	if(first < end){
		pivot = dividir(vetor,first,end);
		quick(vetor,first,pivot-1);
		quick(vetor,pivot+1,end);
	}
}

int dividir(char *vetor, int first, int end){
	char aux, pivo;
	int  esq, dir;
	esq = first;
	dir = end;
	pivo=vetor[first];
	while(esq < dir){
		while(vetor[esq] <= pivo)
			esq++;
		while(vetor[dir] > pivo)
			dir--;
		if(esq < dir){
			aux = vetor[esq];
			vetor[esq] = vetor[dir];
			vetor[dir] = aux;
		}
	}
	vetor[first] = vetor[dir];
	vetor[dir] = pivo;
	return dir;
}