#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, soma, subtracao, divisao, multiplicacao;
    char opcao,opcaofake;

    printf("Digite o primeiro número: ");
    scanf("%f",&num1);
    printf("Digite o segundo número: ");
    scanf("%f",&num2);
    printf("Escolha a operação: (a)soma  (b)subtração  (c)divisão  (d)multiplicação: ");
    scanf(" %c",&opcao);

    switch(opcao){
        case 'a':
            soma = num1+num2;
            printf("A soma é: %.2f",soma);
            break;
        case 'b':
            subtracao = num1-num2;
            printf("A subtração é: %.2f",subtracao);
            break;
        case 'c':
            divisao = num1/num2;
            printf("A divisão é: %.2f",divisao);
            break;
        case 'd':
            multiplicacao = num1*num2;
            printf("A multiplicação é: %.2f",multiplicacao);
            break;
        default:
            printf("\nOpção inválida!");
            break;
    }

return 0;
}
