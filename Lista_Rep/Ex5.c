
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

        setlocale(LC_ALL, "Portuguese");
        int num1,num2,soma;
        printf("Digite o primeiro n�mero: ");
        scanf("%d",&num1);
        printf("Digite o segundo n�mero: ");
        scanf("%d",&num2);


    while(num1 > num2){
        printf("\nN�mero 1 Inv�lido");
        printf("\nDigite o primeiro n�mero: ");
        scanf("%d",&num1);

    }

    for(int i = num1; i < num2; i++){
        if(i % 2){
            soma = soma + i;
        }
    }

    printf("\nSoma dos �mpares �: %d",soma);

return 0;
}
