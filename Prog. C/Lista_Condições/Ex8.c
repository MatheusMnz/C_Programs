#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float a;

    printf("Digite n�mero: ");
    scanf("%f", &a);
    printf("%.2f\n",a);
    if(a>0){
        printf("O n�mero � positivo");
    } else if (a<0){
        printf("O n�mero � negativo");
        } else {printf("O n�mero � zero");}

return 0;
}

