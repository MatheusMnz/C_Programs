#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f = fopen("torigen.pdf","wb");

	char s[20];
	printf("String: ");
	fgets(s,20,stdin);
	
	int t=0; for(t; s[t] != '\0'; t++); t--;
	
	int teste = fwrite(s,sizeof(char),t,f);
	
	if(teste != t)
	{	printf("Erro de escrita");
		system("pause");
		exit(1);
	}
	
	fclose(f);
	fopen("torigen.pdf","rb");
	
	char leit[t];
	
	fread(leit,sizeof(char),t,f);
	fclose(f);
	
	printf("Leitura: %s\n",leit);
}