#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num;
int cont = 0;

int primo (int a){
	for (int i = 1; i<= a; i++){
		if(a % i == 0){
			cont ++;
		} else {
			continue;
		}
	}


	if (cont == 2){
		printf("O número é primo");
		return 1;
	} else {
		printf("O número não é primo");
		return 0;
	}



}

int main(){
	setlocale(LC_ALL,"");
	printf("Digite um número: ");
	scanf("%d",&num);

	while (num < 0){
		printf("Digite um número: ");
		scanf("%d",&num);
	}



	primo(num);
	return 0;
}
