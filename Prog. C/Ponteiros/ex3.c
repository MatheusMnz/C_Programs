/*
char *strstr (char *str1, char *str2)” que retorna o endereço de str1 em que
ocorre pela primeira vez a substring str2. Caso a substring str2 não exista em str1,
retorne NULL. Implemente o programa principal para testar a função. No programa
principal, você deve exibir o endereço do primeiro caracter de str1 e também o
endereço de str1 a partir do qual existe uma ocorrência de str2.
*/
#include <stdio.h>
#include <stdlib.h>

char *criar(int *strtam){
    int tam;
    printf("\nInsert a size of array: ");
    scanf("%d", &tam);
    char *str = malloc(tam * sizeof(char));
    //*strtam=tam;
    return str;
}

int tamt(char *strtam){
    int i=0;
    for(i; strtam[i] != '\0'; i++){
        i++;
    }
    return i;
}


char* strstr(char* str, char* strSub){
    int cont; int k;
    int sizestrsub = tamt(strSub);
    for(int i =0; str[i] != '\0'; i++){
        cont=0;
        if(str[i] == strSub[0]){
            k=1;
            cont++;
            if(cont = sizestrsub)
                return &str[i];
            for(int j=i+1; str[j] != '\0';j++){
                if(str[j] == strSub[k]){
                    k++;
                    cont++;
                    if(cont == sizestrsub){
                        return &str[i];
                    }
                }
                else{
                    break;
                }
            }
        }
    }
   return NULL;
}

int main(){
    char *str1;  int tam1;
    char *str2;  int tam2;
    char *endereco;
    
    str1 = criar(&tam1);
    str2 = criar(&tam2);

    printf("Digite uma string: ");
    scanf("%s",str1);
    printf("Digite outra string: ");
    scanf("%s",str2);

    endereco = strstr(str1,str2);
    printf("\n%p",endereco);

}
