#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime_sobrenome(char *nome,int cont);


int main()
{
        char nome[100];
        int cont=0;


        printf("Digite seu nome: ");
        fgets(nome,100,stdin);
        char *p = strchr(nome, '\n');
        if (p)
        {
            *p = '\0';
        }

        for(int i=0; nome[i] != '\0'; i++)
        {
            if(nome[i] == ' ')
                cont++;
        }

    imprime_sobrenome(nome,cont);
    printf("\n");
        
}

void imprime_sobrenome(char *nome,int cont){
    int cont2=0;
    for(int i=0; nome[i] != '\0'; i++)
        {              
            if(nome[i] == ' ')
            {   
                cont2++; 
                if(cont2 == cont)
                {
                    while(nome[i] != '\0')
                    {
                        printf("%c",nome[i]);
                        i++;
                    }
                break;
                }
            }
        }
}
