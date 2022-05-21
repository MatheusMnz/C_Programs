
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

        setlocale(LC_ALL, "Portuguese");
        int num1;
        int fat;
        printf("Digite o primeiro número: ");
        scanf("%d",&num1);

    while(num1 < 0){
        printf("Número Inválido");
        printf("Digite o primeiro número: ");
        scanf("%d",&num1);

    }

    fat = num1 * (num1-1);
    printf("%d",fat);

return 0;
}
