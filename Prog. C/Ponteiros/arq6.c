#include <stdio.h>
#include <stdlib.h>



void CopiaArquivo (FILE *arqEntrada, FILE *arqSaida){
   int ch;
   while ((ch = getc (arqEntrada)) != EOF)
       putc (ch, arqSaida);
}


int main(){
FILE *fp1, *fp2;

    if((fp1 = fopen("OIP.jpg", "r")) == NULL){
        printf("Erro ao abrir");
        exit(1);
    }

    if((fp2 = fopen("OIP_Dest", "w")) == NULL){
        printf("Erro ao abrir");
        exit(1);
    }

    CopiaArquivo(fp1,fp2);
    fclose(fp1);
    fclose(fp2);
}