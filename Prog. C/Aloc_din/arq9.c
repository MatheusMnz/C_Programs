#include <stdio.h>
#include <stdlib.h>
/* Implemente um programa que apaga todas as ocorrências de uma certa palavra em um
arquivo texto. Sugestão: copie o conteúdo do arquivo texto para um arquivo auxiliar, com
exceção da palavra que se deseja excluir. Ao final, apague o arquivo texto original e altere o
nome   do   auxiliar   (use   as   funções  system(“del   arquivo.txt”);  system(“copy
auxiliar.txt arquivo.txt”); system(“del auxiliar.txt”)) */

int main(){
int len;
FILE *f1 = fopen("/home/matheus/Desktop/Prog.c/Ponteiros/arquivo07_a.txt","r");


fseek(f1,0,SEEK_END);
len = ftell(f1);
fseek(f1,0,SEEK_SET);

char *str = malloc ((len+1) * sizeof(char));
fgets(str,len,f1); //Armazena em str o tamanho do meu f1;

//Crio vetor auxiliar
char aux_str[50];
printf("Digite a palavra: ");
scanf("%s",aux_str);

//Pego o tamanho da substring
int t=0, v=1, ic;
for(t; str[t] != '\0'; t++){}
t--;
str[t] = '\0';

    // Percorrer até o tamanho da minha str
	for(int i=0; i<t; i++){	
        if(str[i] == aux_str[0]){
            ic = i;
            //Comparo todas as outras posições, se for diferente meu parametro v, vai pra 0;
			for(int j=0; j<t && v==1; j++,i++){
                if(aux_str[j] != str[i]) 
                    v=0;
			}
			
			if(v==1){	
                for(ic; str[ic] != '\0'; ic++){
                    str[ic] = str[ic + t];
				}
			}
		}
	}

fclose(f1);

FILE *f2 = fopen("arq9.txt","w");

	if(f2== NULL)
	{	printf("Erro de abertura\n");
		system("pause");
		exit(1);
	}
	
	fputs(str,f2);
	fclose(f2);







    
}