#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float a,b,c;

    printf("Digite o 1 número inteiro: ");
    scanf("%d", &a);
    printf("Digite o 2 número inteiro: ");
    scanf("%d", &b);
    printf("Digite o 3 número inteiro: ");
    scanf("%d", &c);



    if(a==b && b == c){
        printf("Há 3 números iguais");
    } else if (a==b || b ==c || a == c){
        printf("Há 2 números iguais");
        } else {printf("Não há nenhum número igual.");}



return 0;
}

