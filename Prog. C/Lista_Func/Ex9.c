
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int fat (int value){
    int valor_fat = 0;
    int x = value;

    if ( value < 0) {return -1;}


    else {
        if (value == 2){return 2;}

            for (int i = value-1; i > 1; i--){
                    if(i == value-1){
                        valor_fat = value * i;
                    }
                    else{
                        valor_fat *= i;
                    }
            }
    return valor_fat;
    }

}

int main (){
    setlocale(LC_ALL,"");
    int num1;
    int x;


    printf("Digite um número inteiro: ");
    scanf("%d",&num1);
    int fat(num1);
    x = fat(num1);


    while(x == -1){
        printf("Digite um número inteiro: ");
        scanf("%d",&num1);
        x = fat(num1);
    }

    printf("O fatorial de %d é %d",num1, x);


return 0;
}
