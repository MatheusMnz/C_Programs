#include <stdio.h>
#include <stdlib.h>

int confere(char *vetor, char ch){
    for(int i=0; vetor[i] != '\0'; i++){
        if(vetor[i] == ch){
            return 0;
        }
    }
    return 1;
}


int main(){
    char vetor[15];
    char aux[15];
    char ch;
    int k=0;
    gets(vetor);
    scanf("%c",&ch);

        if(confere(vetor,ch)){
            aux[0] = ch;
        }
    

    printf("%c",aux[0]);

}