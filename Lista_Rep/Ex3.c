
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

        setlocale(LC_ALL, "Portuguese");
        int num1,num2;
        int numfinal = 0;

        printf("Digite o primeiro n�mero: ");
        scanf("%d",&num1);
        printf("Digite o segundo n�mero: ");
        scanf("%d",&num2);

        for(int i = 0; i<num2;i++){
            numfinal = numfinal+ num1;
        }
        printf("%d", numfinal);

return 0;
}
