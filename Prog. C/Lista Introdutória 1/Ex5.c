
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, d;
    float media = 0;

    printf("Digite um numero: ");
    scanf("%f",&a);
    printf("Digite um numero: ");
    scanf("%f",&b);
    printf("Digite um numero: ");
    scanf("%f",&c);
    printf("Digite um numero: ");
    scanf("%f",&d);

    media = (a+b+c+d) / 4;
    printf("A Média é: %.3f",media);

return 0;
}
