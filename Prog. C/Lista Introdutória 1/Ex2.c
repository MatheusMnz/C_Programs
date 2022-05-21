
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL, "Portuguese");

    float salario;
    float aguacons;
    printf("Digite o valor do salário mínimo: ");
    scanf("%f",&salario);
    printf("Digite a quantidade de água consumida: ");
    scanf("%f",&aguacons);
    float pagar;
    pagar = aguacons/1000 * 0.02 * salario;
    printf("O valor a ser pago  é: R$%.3f", pagar);

return 0;
}
