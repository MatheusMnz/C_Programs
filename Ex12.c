#include <stdio.h>
#include <stdlib.h>


float potencia(int a, int b){
	float valor_pot=1;
		for(int i=1;i<=b;i++){
			valor_pot *= 2;
		}
return valor_pot;
}


float val (float x, float t, int n){
	float base = 1+t;
	float sum_val=0;

		for(int i=1; i<=n; i++){
			sum_val += (x/(potencia(base,i)));
		}
return sum_val;
}


int main (){
	float a,c;
	float res;
	int b;
	printf("Digite um Valor X, uma Taxa e uma quantidade de anos: \n");
	scanf("%f %d %f",&a,&b,&c);
	res = val(a,b,c);
	printf("Valor Líquido Atual : %.3f",res);


	return 0;
}