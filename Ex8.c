#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int primo (int a){
	int cont = 0;
	for (int i = 1; i<= a; i++){
		if(a % i == 0){
			cont ++;
		} else {continue;}
	}

	if (cont == 2){return 1;} 
	else {return 0;}
}

int main(){
	setlocale(LC_ALL,"pt_BR");
	int soma=0;	
	int n;
	int x;

	printf("Digite um N: ");
	scanf("%d",&n);

	while (n <= 0){
		printf("Digite um N: ");
		scanf("%d",&n);
	}

	for (int i = 1; i<=n ; i++){
		x = primo(i);
		if(x){
			soma += i;
		} 
	}

	printf("A soma é %d", soma);

	return 0;
}