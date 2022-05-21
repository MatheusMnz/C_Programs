
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

        setlocale(LC_ALL, "Portuguese");
        float lista[10];
        float media;
        float cont = 0;
        for (int i = 0; i <= 9; i++){
            printf("Digite um número: ");
            scanf("%f",&lista[i]);
            cont += lista[i];
            }
            media = cont/10;
    printf("%.2f",media);
return 0;
}
