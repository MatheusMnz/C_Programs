#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("Digite n�mero inteiro: ");
    scanf("%d", &a);

    if(a % 2){
        printf("O n�mero � impar");
    } else {printf("O n�mero � par.");}

return 0;
}

