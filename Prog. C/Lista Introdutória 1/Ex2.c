
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL, "Portuguese");

    float salario;
    float aguacons;
    printf("Digite o valor do sal�rio m�nimo: ");
    scanf("%f",&salario);
    printf("Digite a quantidade de �gua consumida: ");
    scanf("%f",&aguacons);
    float pagar;
    pagar = aguacons/1000 * 0.02 * salario;
    printf("O valor a ser pago  �: R$%.3f", pagar);

return 0;
}
