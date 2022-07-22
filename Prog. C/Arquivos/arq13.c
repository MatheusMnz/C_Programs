#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f1 = fopen("numerost.txt","w");	
	FILE *f2 = fopen("numerosb.txt","wb");

	int v[100];

	for(int i=0; i<100; i++) 
        v[i] =  10000 + rand()% 89999;
	
	for(int i=0; i<100; i++) 
        fprintf(f1,"%d",v[i]);
	    fwrite(v,sizeof(int),100,f2);
	
	fseek(f1,0,SEEK_END); printf("t1 = %ld\n",ftell(f1));
	fseek(f2,0,SEEK_END); printf("t2 = %ld\n",ftell(f2));
}

/*Ou seja o arquivo texto cada dígito é convertido em seu caracter em ascii
Ou seja, 8 Bits por dígito.
No arquivo binário não há essa conversão.