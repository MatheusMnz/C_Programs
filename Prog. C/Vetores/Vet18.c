#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char v[30];
char ch;
int k;

printf("Digite uma string: ");
fgets(v,30,stdin);
    char *p = strchr(v,'\n');
    if(p){
        *p = '\0';
    }

printf("Digite um caracter: ");
ch = getchar();


for(int i=0; v[i] != '\0'; i++){
    if(v[i] == ch){
        for( k=i; v[k] != '\0'; k++){
            
            v[k] = v[k+1];
        }
        v[k] = '\0';
    }
}

for(int j=0; v[j] != '\0'; j++){
    printf("%c",v[j]);
}



printf("\n");
}
