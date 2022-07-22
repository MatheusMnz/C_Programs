#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    system("clear");
    char s1[20]; char s2[20];
    printf("Digite uma String: ");
    gets(s1);
    printf("Digite outra String: ");
    gets(s2);
    strcat(s1,s2);
    printf("String concatenada: |%s|",s1);

    //Maneira "Correta"
    printf("Digite uma String: ");
    fgets(s1,20,stdin);
    char *p = strchr(s1, '\n');
    if (p){
        *p = '\0';
    }
    
    printf("Digite outra String: ");
    fgets(s2,20,stdin);
    char *t = strchr(s2, '\n');
    if (t){
        *t = '\0';    
    }

    strcat(s1,s2);
    printf("String concatenada: |%s|",s1);
}