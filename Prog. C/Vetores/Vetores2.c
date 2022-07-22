#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int contar(char v[]);
bool comparar(char s1[], char s2[]);


int main (){
    system("clear");
    char str[10], str2[10];
    int resp=0;
    bool compara;


    printf("Digite uma string:\n");
    fgets(str,10,stdin); //Fgets retorna o enter, então deve tirar -1
    printf("Digite uma string:\n");
    fgets(str2,10,stdin); //Fgets retorna o enter, então deve tirar -1

    resp = contar(str);
    printf("Quant. carac. %d\n",resp);

    compara = comparar(str,str2);
    if(compara==true){
        printf("O vetores são iguais");
    }
    else{
        printf("Os vetores não são iguais");
    }
    printf("\n");
}



int contar(char v[]){
    int i;
    for (i=0; v[i] != '\0';i++);
    return i-1;
}

bool comparar(char s1[], char s2[]){
    int i, contador;
    for(i=0; s1[i] != '\0' && s2[i] != '\0';i++){
        if(s1[i] != s2[i])
            return 0;
    }
    
    return (s1[i] == '\0' && s2[i] == '\0');
    
}