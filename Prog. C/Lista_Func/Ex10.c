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


int main(){
    setlocale(LC_ALL,"");
    int n;
    int soma = 0;
    int x = 0;

    printf("\tDigite um valor n: ");
    scanf("%d",&n);

    while(n < 0){
        printf("\tDigite um valor n: ");
        scanf("%d",&n);
        x = fat(n);
    }

    if( n < 3){
        for(int i = 3; i >= n; i--){
            soma += fat(i);
        }
    }

    else{
        for(int i = 3; i <= n; i++){
            soma += fat(i);
        }
    }
    printf("\tO valor do somatório é: %d",soma);
return 0;
}
