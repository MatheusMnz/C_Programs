#include <stdio.h>
#include <stdlib.h>

int* alocaVet(int tam){
	int *vet_aux;
	vet_aux = (int*) malloc(tam * sizeof(int));
	return vet_aux;
}




int main(){

	int tam, val, *vetor;

	//Criando um vetor com alocação dinâmica/

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);

	vetor = alocaVet(tam); //Recebe o endereço da primeira posição vetor alocado dinamicamente.

	printf("Digite valores para o vetor:");

	//Preenchendo valores
	for(int i=0; i<tam;i++){
		scanf("%d",&val);
		getchar();
		vetor[i] = val;
	}
	system("CLS");

	// Printando o Vetor
	for(int i=0; i<tam;i++){
		printf("%d",vetor[i]);
	}


	//Printando tamanho do vetor
	free(vetor);
}