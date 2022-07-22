#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


//Declaração de funções
int vet_par(int *vetor,int tam);
int vet_impar(int *vetor, int tam);
float vet_media(int *vetor, float tam);
int maior_vet(int *vetor, int num);
int maior_dif(int *vetor, int tam);
void quick(int *vetor, int esq, int dir);
int dividir(int *vetor, int esq, int dir);
void print(int *vetor, int tam);
int remove_rep(int *vetor, int tam);
float max(float *vetor2, int tam);
void print_float(float *vetor2, int n);




int main (){
	system("clear");
    setlocale(LC_ALL,"");
	int vetor[15];
    float vetor2[15];
	int tam=0;
	int quant_num_par=0;
	int quant_num_impar=0;
	float media_vet=0.0;
	int maior_num=0;
	int bigger_diff=0;
	int new_size_vet=0;
    float max_value=0.0;
    int n;

	time_t t;
	srand((unsigned) time(&t));

    printf("Digite um número N para análise: ");
    scanf("%d", &n);

	//Gerando vetor aleatorio Inteiro
	for(int i=0;i<15;i++){
		tam++;
		vetor[i]  = rand() % 30;
	}
    
    //Gerando vetor aleatorio Float
	for(int i=0;i<n;i++){
		vetor2[i]  = (float)(rand()/2.3);
	}



	printf("Vetor inteiro não ordenado: \n");
	print(vetor,tam);
	printf("\n");
    printf("Vetor Float não ordenado: \n");
    print_float(vetor2,n);


	quant_num_par = vet_par(vetor,tam);
	quant_num_impar = vet_impar(vetor,tam);
	media_vet = vet_media(vetor,tam);
	maior_num = maior_vet(vetor,tam);
	bigger_diff = maior_dif(vetor,tam);
	quick(vetor,0,tam-1); //Quick sort, começa em 0 e vai até o tamanho do vetor (0-14)
    max_value = max(vetor2,n);

	printf("\n");
	printf("Vetor ordenado: \n");
	print(vetor,tam);
	printf("\n");

	new_size_vet = remove_rep(vetor,tam);
	printf("\nVetor sem repeticões: \n");
	print(vetor,new_size_vet);
	printf("\n");


	printf("\nPossui %d numeros pares",quant_num_par);
	printf("\nPossui %d numeros impares",quant_num_impar);
	printf("\nA media e %.3f",media_vet);
	printf("\nO maior numero e: %d",maior_num);
	printf("\nA maior diferenca e: %d",bigger_diff);
	printf("\nO terceiro maior e elemento: %d ",vetor[tam-3]);
    printf("\nO maior elemento do vetor Float até n é: %3.f",max_value);
	printf("\n");





	return 0;
}





//Funções implementadas

int vet_par(int *vetor,int tam){
	int cont_par=0;
	for(int i=0;i<tam;i++){
		if(vetor[i] % 2 == 0)
			cont_par++;
	}
	return cont_par;
}

int vet_impar(int *vetor,int tam){
	int cont_impar=0;
	for(int i=0;i<tam;i++){
		if(vetor[i] % 2)
			cont_impar++;
	}
	return cont_impar;
}

float vet_media(int *vetor,float tam){
	int soma=0;
	float media=0.0;
	for(int i=0;i<tam;i++){
		soma += vetor[i];
	}
	media = soma/tam;
	return media;
}

int maior_vet(int *vetor, int tam){
    int maior =0;
	for(int i=0;i<tam;i++){
		if(vetor[i] > maior)
			maior = vetor[i];
	}
	return maior;
}

int maior_dif(int *vetor, int tam){
	int dif=0;
	int Gdif=0;

	for(int i=1;i<+tam;i++){
		dif=0;
		dif = abs(abs(vetor[i]) - abs(vetor[i-1]));
		if(dif > Gdif){
			Gdif = dif;
		}
	}
	return Gdif;
}

void quick(int *vetor, int esq, int dir){
	int pos;
	if(esq < dir){
		pos = dividir(vetor,esq,dir);
		quick(vetor,esq,pos);
		quick(vetor,pos+1,dir);
	}
}

int dividir(int *vetor, int esq, int dir){
	int aux;
	int cont=esq;

	for(int i=esq+1; i<=dir; i++){
		if(vetor[i] < vetor[esq]){
			cont++;
			aux = vetor[i];
			vetor[i] = vetor[cont];
			vetor[cont] = aux;
		}

	}
	aux = vetor[esq];
	vetor[esq] = vetor[cont];
	vetor[cont] = aux;

	return cont;
}

void print(int *vetor,int tam){
	for(int i=0;i<tam;i++)
		printf(" %d",vetor[i]);
}

void print_float(float *vetor2, int n){
    for(int i=0; i< n;i++){
        printf(" %2.f",vetor2[i]);
    }
}

int remove_rep(int *vetor, int tam){
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

float max(float *vetor2, int n){
    float maior=0;
    for(int i=0; i <= n; i++){
        if(vetor2[i]>maior)
            maior = vetor2[i];
    }
    return maior;
}