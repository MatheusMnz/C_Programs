#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float a,b,c;

    printf("Digite o 1 n�mero inteiro: ");
    scanf("%d", &a);
    printf("Digite o 2 n�mero inteiro: ");
    scanf("%d", &b);
    printf("Digite o 3 n�mero inteiro: ");
    scanf("%d", &c);



    if(a==b && b == c){
        printf("H� 3 n�meros iguais");
    } else if (a==b || b ==c || a == c){
        printf("H� 2 n�meros iguais");
        } else {printf("N�o h� nenhum n�mero igual.");}



return 0;
}

