#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, soma, subtracao, divisao, multiplicacao;
    char opcao,opcaofake;

    printf("Digite o primeiro n�mero: ");
    scanf("%f",&num1);
    printf("Digite o segundo n�mero: ");
    scanf("%f",&num2);
    printf("Escolha a opera��o: (a)soma  (b)subtra��o  (c)divis�o  (d)multiplica��o: ");
    scanf(" %c",&opcao);

    switch(opcao){
        case 'a':
            soma = num1+num2;
            printf("A soma �: %.2f",soma);
            break;
        case 'b':
            subtracao = num1-num2;
            printf("A subtra��o �: %.2f",subtracao);
            break;
        case 'c':
            divisao = num1/num2;
            printf("A divis�o �: %.2f",divisao);
            break;
        case 'd':
            multiplicacao = num1*num2;
            printf("A multiplica��o �: %.2f",multiplicacao);
            break;
        default:
            printf("\nOp��o inv�lida!");
            break;
    }

return 0;
}
