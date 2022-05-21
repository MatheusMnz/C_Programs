#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("Digite número inteiro(1,5 ou 10): ");
    scanf("%d", &a);

    if(a==1 || a == 5 || a == 10){
        printf("O número é : %d",a);
    } else {printf("Valor Inválido.");}

return 0;
}

