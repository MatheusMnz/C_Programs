
#include <stdio.h>
#include <stdlib.h>
int main (){

    int a, b, aux;
    printf("Digite um valor para A: ");
    scanf("%d", &a);
    printf("Digite um valor para B: ");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("\nValor de A novo = %d", a);
    printf("\nValor de B novo = %d", b);

return 0;
}
