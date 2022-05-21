#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("Digite número inteiro: ");
    scanf("%d", &a);

    if(a % 2){
        printf("O número é impar");
    } else {printf("O número é par.");}

return 0;
}

