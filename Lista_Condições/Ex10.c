#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int ano;
    printf("Digite um ano para saber se é bissexto: ");
    scanf("%d",&ano);


    if(ano % 400 == 0){
        printf("O ano é bissexto.");
        }
    else if (ano % 4 == 0 &&  ano % 100 != 0){
        printf("O ano é bissexto.2");
        }else{
        printf("O ano não é bissexto.");
        }

return 0;
}
