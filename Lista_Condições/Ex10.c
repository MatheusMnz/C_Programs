#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int ano;
    printf("Digite um ano para saber se � bissexto: ");
    scanf("%d",&ano);


    if(ano % 400 == 0){
        printf("O ano � bissexto.");
        }
    else if (ano % 4 == 0 &&  ano % 100 != 0){
        printf("O ano � bissexto.2");
        }else{
        printf("O ano n�o � bissexto.");
        }

return 0;
}
