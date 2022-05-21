#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n1,n2;
int soma=0;


int somaimpar (int x,int y){
	for(int i=n1; i<=n2;i++)
		if(i % 2 == 1)
			soma += i;
		else continue;
}







int main (){

	setlocale(LC_ALL,"");
	printf("Digite um número N1: ");
	scanf("%d",&n1);
	printf("Digite um número N1: ");
	scanf("%d",&n2);	

	while(n1>n2){
		printf("Digite n2 maior que n1: ");
		scanf("%d",&n2);
	}

	getchar();
	somaimpar(n1,n2);
	printf("%d",soma);

	return 0;
}