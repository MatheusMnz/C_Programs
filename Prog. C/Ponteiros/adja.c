#include <stdio.h>
#include <stdlib.h>


int exibir_vetor(char *v,int *tam);
int liberar_vetor(char *v);


char *criar_vetor(int *tam){

	printf("digite aqui o tamanho do seu vetor\n");
	int carry;
	scanf("%d",&carry);
	char *vec = malloc(carry*sizeof(int));

	printf("aqui");
	*tam = carry;
	return vec;
}

int main(void){
	srand(0);
	char *vetor;
	int *tam;
	vetor = criar_vetor(tam);

    scanf("%s",vetor);
	printf(" \n%d \n",*tam);
	 exibir_vetor(vetor,tam);
	liberar_vetor(vetor);
}


int exibir_vetor(char *v,int *tam){

	for(int x=0;x<*tam;x++){
		printf(" v[%d]=%c \n",x,v[x]);
	}

}

int liberar_vetor(char *v){

	free(v);

}