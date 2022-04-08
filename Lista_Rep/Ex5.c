
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

        setlocale(LC_ALL, "Portuguese");
        int num1,num2,soma;
        printf("Digite o primeiro número: ");
        scanf("%d",&num1);
        printf("Digite o segundo número: ");
        scanf("%d",&num2);


    while(num1 > num2){
        printf("\nNúmero 1 Inválido");
        printf("\nDigite o primeiro número: ");
        scanf("%d",&num1);

    }

    for(int i = num1; i < num2; i++){
        if(i % 2){
            soma = soma + i;
        }
    }

    printf("\nSoma dos ímpares é: %d",soma);

return 0;
}
