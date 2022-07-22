
#include <stdio.h>
#include <stdlib.h>

void numeros(FILE *f)
{	int num[20];

	fread(num,sizeof(int),20,f);
	
	printf("Numeros: "); for(int i=0; i<20; i++) printf("%d, ",num[i]); printf("\n");
}

int main()
{	FILE *f = fopen("texto1.txt","wb");

	int v[20];
	for(int i=0; i<20; i++) v[i] = rand()%20;
	printf("Vetor: "); for(int i=0; i<20; i++) printf("%d, ",v[i]); printf("\n");
	
	fwrite(v,sizeof(int),20,f);
	
	freopen("texto1.txt","rb",f);
	
	numeros(f);
}