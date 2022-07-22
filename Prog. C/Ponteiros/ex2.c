/*1) “char * strchar (char *s, char ch)” que retorna o endereço da primeira
ocorrência de “ch” em “s”; caso não exista, retorna NULL (NULL é uma constante
simbólica que indica que o ponteiro não aponta para nenhuma variável). Implemente a
função principal (“main”) para testar a função strchar. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strchar(char *s, char ch){
    char *pos;
    int x=0;
    for(int i=0; s[i] != '\0'; i++){
        if(s[i] == ch){
            pos = &s[i];
            x++;
        }
    }
    if(x == 0){
        return NULL;
    }
    else{
        return pos;
    }
}




int main(){
    char caracter;
    char *t;
    char s[10]; //( 9 + \0)
    fgets(s,10,stdin);
    char *p = strchr(s,'\n');
    if(p){*p = '\0';}

    printf("\nDigite qual Caracter deseja saber a posição: ");
    scanf("%c",&caracter);


   t = strchar(s,caracter);
   printf("\n O endereço e: %p",t);
}