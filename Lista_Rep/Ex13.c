#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"");
    int n;
    int i = 3;
    int soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    for(int i = 3; i<= n; i++){
        soma += (5 * i) + 2;
    }
    printf("Valor final da soma e: %d",soma);

return 0;
}

