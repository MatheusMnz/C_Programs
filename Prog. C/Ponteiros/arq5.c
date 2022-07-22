#include <stdio.h>
#include <stdlib.h>


int main(){    
    /*Abrir arquivo = fopen()
    FILE *fopen(const char *filename, const char *mode)

    Abrindo um arquivo:
        FILE *fptr;
        if((fptr = fopen("text.txt","r")) == NULL){
            printf("Error");
            exit(1);
        }
    
    Fechando um Arquivo:
        int fclose(File *stream);

    Códigos:
        r: Abre para leitura.
        w: Abre arquivo para escrita
        a: Abre arquivo texto para gravação (append). adiciona no final do arquivo.
        r+: Abre arquivo para leitura e escrita. Se não existe retorna NULL.
        w+: Abre arquivo para leitura e escrita. Se existe ele sobrescreve, se n existe ele cria.
        a+: Abre arquivo texto para leitura e gravação. Se n existe ele cria. */

    FILE *fp;
    char nome[50];
    int len;
    gets(nome);
    
  
    if((fp = fopen("teste01.txt", "w")) == NULL){
        printf("Erro ao abrir");
        exit(1);
    }

    fprintf(fp,"%s",nome);
    fseek(fp,0,SEEK_END);
    len = ftell(fp);
    fclose(fp);

    if((fp = fopen("teste01.txt","r")) == NULL){
        printf("Error");
        exit(1);
    }

    fscanf(fp,"%s",nome);
    fprintf(stdout,"\n%s",nome);
    fprintf(stdout,"\n%d",len);

    return 0;
}