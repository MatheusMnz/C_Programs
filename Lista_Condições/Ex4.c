#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int a,b;

    printf("Digite o 1 n�mero inteiro: ");
    scanf("%d", &a);
    printf("Digite o 2 n�mero inteiro: ");
    scanf("%d", &b);

    while (a == b){
    printf("Digite o 1 n�mero inteiro: ");
    scanf("%d", &a);
    printf("Digite o 2 n�mero inteiro diferente do 1: ");
    scanf("%d", &b);
    }

    if(a>b){
        printf("O 1 N�mero � maior: %d",a);
    } else {printf("O 2 N�mero � maior: %d",b);}



return 0;
}

