#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("Digite n�mero inteiro(1,5 ou 10): ");
    scanf("%d", &a);

    if(a==1 || a == 5 || a == 10){
        printf("O n�mero � : %d",a);
    } else {printf("Valor Inv�lido.");}

return 0;
}

