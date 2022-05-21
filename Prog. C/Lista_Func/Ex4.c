#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n;
int soma;

int somatorio(int x){
	for(int i=3;i<=n; i++){
		soma+= 5*i+2;
	}
	printf("%d",soma);
}





int main (){

	printf("Insert a Number: ");
	scanf("%d",&n);

	somatorio(n);

	return 0;
}