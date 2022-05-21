#include <stdio.h>
#include <stdlib.h>

int num;
int cont = 0;

int primo (int a){
	for (int i = 1; i<= a; i++){
		if(a % i == 0){
		} else {
			continue;
		}
	}

	if (cont == 2){
		printf("O numero eh primo");
		return 1;
	} else {
		printf("O numero nao eh primo");
		return 0;
	}}



int main(){
	printf("Digite um numero: ");
	scanf("%d",&num);

	while (num < 0){
		printf("Digite um numero: ");
		scanf("%d",&num);
	}

	primo(num);
	return 0;
}