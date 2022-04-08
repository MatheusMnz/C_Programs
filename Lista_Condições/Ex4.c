#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int a,b;

    printf("Digite o 1 número inteiro: ");
    scanf("%d", &a);
    printf("Digite o 2 número inteiro: ");
    scanf("%d", &b);

    while (a == b){
    printf("Digite o 1 número inteiro: ");
    scanf("%d", &a);
    printf("Digite o 2 número inteiro diferente do 1: ");
    scanf("%d", &b);
    }

    if(a>b){
        printf("O 1 Número é maior: %d",a);
    } else {printf("O 2 Número é maior: %d",b);}



return 0;
}

