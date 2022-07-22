#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 4
#define n 5

void quick(int *vetor, int first, int end);
int dividir(int *vetor, int first, int end);
int remove_num(int *vetor, int tam);



int main(){
    int vetor[50];
    int cont_media=0;
    int cont_pares=0;
    int soma_impar=0;
    int soma_matrix=0;
    int maior=0;
    int aux;

    float media=0;
	time_t t;
	srand((unsigned) time(&t));

    int matriz[m][n];
    for(int i=0; i< m; i++){
        printf("\n");
        for(int j=0; j<n;j++){
            matriz[i][j] = rand() % 20;
            soma_matrix += matriz[i][j];
            if(!(matriz[i][j] % 2))
                cont_pares++;
            if(matriz[i][j] % 2)
                soma_impar += matriz[i][j];
            if(maior < matriz[i][j])
                maior = matriz[i][j];
        printf("\t%d",matriz[i][j]);
        }
    }

//For para percorrer a matriz novamente verificando se o elemento é > media.
    media = (float)soma_matrix/20;
    for(int i=0; i<m; i++){
        for(int j=0;j<n;j++){
            if(matriz[i][j] > media){
                cont_media++;
            }
        }
    }

///-----TRANSFORMANDO MATRIZ EM VETOR------
    int k=0;
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            vetor[k]=matriz[i][j];
            k++; 
        }
    }

///------Ordenando o Vetor----------------
    quick(vetor,0,19);
    printf("\n\n");

//-----TRANSFORMANDO VETOR EM MATRIZ------
    int l=0,p,q;
    for (p=0; p<m; p++) {  
        for (q=0; q<n; q++) {
            matriz[p][q]=vetor[l];
            l++; 
    }
    }

//Printando Matriz Ordenada
printf("\n\t ------Matriz Ordenada--------\n");
    for(int i=0; i<m; i++){
        printf("\n");
        for(int j=0;j<n;j++){
            printf("\t%d",matriz[i][j]);
        }
    }


/// ---TRANSFORMANDO EM VETOR---------------
    int r=0;
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            vetor[r]=matriz[i][j];
            r++; 
        }
    }
//---REMOVENDO NUM REPETIDO-----------------
    int tam=20;
    int res = remove_num(vetor,tam);
    printf("Res = %d",res);

//-----TRANSFORMANDO VETOR EM MATRIZ------
    int conta=0;
    for (int p=0; p<m; p++) {  
        for (int q=0; q<n; q++) {
            matriz[p][q]=vetor[conta];
            conta++; 
    }
    }

//Printando Matriz Ordenada
printf("\n\t ------Matriz Ordenada No rep --------\n");
    for(int i=0; i<m; i++){
        printf("\n");
        for(int j=0;j<n;j++){
            printf("\t%d",matriz[i][j]);
        }
    }

//-------------------------------------------------
    printf("\n");
    printf("\nPossui %d pares",cont_pares);
    printf("\nSoma dos impares = %d\n",soma_impar);
    printf("Media dos valores = %f",media);
    printf("\nQuantidade de numeros maiores que a media = %d", cont_media);
    printf("\nMaior elemento da matriz = %d", maior);
    printf("\n");
}


void quick(int *vetor, int first, int end){
	int pivot;
	if(first < end){
		pivot = dividir(vetor,first,end);
		quick(vetor,first,pivot-1);
		quick(vetor,pivot+1,end);
	}
}

int dividir(int *vetor, int first, int end){
	int aux, pivo;
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
