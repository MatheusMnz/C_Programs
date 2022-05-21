#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float a;

    printf("Digite número: ");
    scanf("%f", &a);
    printf("%.2f\n",a);
    if(a>0){
        printf("O número é positivo");
    } else if (a<0){
        printf("O número é negativo");
        } else {printf("O número é zero");}

return 0;
}

