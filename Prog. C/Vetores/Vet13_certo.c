#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenar(char *s1, char *s2);

int main(){
    char s1[50];
    char s2[20];

    fgets(s1,30,stdin);
    char *p = strchr(s1,'\n');
    if(p){
        *p = '\0';
    }

    fgets(s2,20,stdin);
    char *y = strchr(s2,'\n');
    if(y){
        *y = '\0';
    }
    
    concatenar(s1,s2);
}

void concatenar(char *s1, char *s2){
    int cont=0;
    int t=0;
    for(int i=0; s1[i] != '\0'; i++){
        cont++;
    }

    while(s2[t] != '\0'){
        s1[cont] = s2[t];
        t++;
        cont++;
    }
    s1[cont] = '\0';

    for(int i=0; s1[i] != '\0'; i++){
        printf("%c",s1[i]);
    }
}
