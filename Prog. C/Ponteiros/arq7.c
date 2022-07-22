#include <stdio.h>
#include <stdlib.h>

//  Implemente um programa que compara o tamanho de 2 arquivos e informa qual possui a maior quantidade de bytes. 



int main(){
    FILE *fp1;
    FILE *fp2;
    char str[50];
    char substr[30];
    int len1, len2;


//Criando e preenchendo o arquivo
   if((fp1 = fopen("arquivo07_a.txt", "w")) == NULL){
        printf("Erro ao Abrir");
        exit(1);
    }

    gets(str);
    fprintf(fp1,"%s",str);
    fclose(fp1);
//Lendo o arquivo e pegando o tamanho em bytes.  
   if((fp1 = fopen("arquivo07_a.txt", "r")) == NULL){
        printf("Erro ao Abrir");
        exit(1);
    }

    fseek(fp1,0,SEEK_END);
    len1 = ftell(fp1);
    fclose(fp1);


//Criando e preenchendo o arquivo
   if((fp2 = fopen("arquivo07_b.txt", "w")) == NULL){
        printf("Erro ao Abrir");
        exit(1);
    }

    gets(substr);
    fprintf(fp2,"%s",substr);
    fclose(fp2);

//Lendo o arquivo e pegando o tamanho em bytes.
    if((fp2 = fopen("arquivo07_b.txt", "r")) == NULL){
        printf("Erro ao Abrir");
        exit(1);
    }

    fseek(fp2,0,SEEK_END);
    len2 = ftell(fp2);
    fclose(fp2);

    if(len1 > len2)
        printf("Len 1: %d",len1);
    else{
        printf("Len 2: %d", len2);
    }

}