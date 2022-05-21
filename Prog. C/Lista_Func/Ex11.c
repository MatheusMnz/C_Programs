#include <stdio.h>
#include <stdlib.h>


int potencia(int a, int b){
	int valor_pot=1;
	for(int i=1;i<=b;i++){
		valor_pot *= 2;
	}
	return valor_pot;
}



int main (){
	int base, expo, x;

	printf("Digite a Base e o Expoente: ");
	scanf("%d %d",&base,&expo);
	x = potencia(base,expo);
	printf("A potencia eh %d",x);


	return 0;
}