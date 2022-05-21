#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int a, b, auxiliar, i, n, soma=0;

    a = 0;
    b = 1;

    printf("Digite um número < 4*10^6: ");
    scanf("%d", &n);
    printf("\nSérie de Fibonacci:\n\n");

    while(n>4000000){
        printf("Digite um número < 4*10^6: ");
        scanf("%d", &n);
    }
    printf("\nSérie de Fibonacci:\n\n");
 // printf("%d\n", b);

    for(i = 0; i < n; i++) {
         if(auxiliar % 2 == 0){
            soma += auxiliar;
            printf("%d\n", soma);
        }
        auxiliar = a + b;
        a = b;
        b = auxiliar;
    }
return 0;
}
