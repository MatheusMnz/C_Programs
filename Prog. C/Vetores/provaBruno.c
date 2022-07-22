#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int contar(char *str1, char *str2);

int main(){
    char str1[50];
    fgets(str1,50,stdin);
    char str2[50];
    memset(str2,-1,50);
    fgets(str2,50,stdin);

    char *p = strchr(str1, '\n');
    if(p){
        *p = '\0';
    }

    char *t = strchr(str2, '\n');
    if(t){
        *t = '\0';
    }


contar(str1,str2);
}

int contar(char *str1, char *str2){
int tam_str2=0;
int cont=0;
int cont_aparece=0;

    for(int k=0; str2[k] != -1;k++){ //Pego o tamanho de str2;
        tam_str2++;
    }
    printf("%d",tam_str2);


    for(int i=0;str1[i] != '\0'; i++){
        if(str1[i] = str2[i]){
            cont++;
            if(cont == tam_str2-2){
                cont_aparece++;
            }
        }

        else{cont=0;}
    }


//printf("aparece %d",cont_aparece);
}
 
    

   

