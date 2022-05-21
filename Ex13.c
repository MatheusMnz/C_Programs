#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função que calcula o fatorial de um número
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

int potencia(int a, int b){
    int valor_pot=1;
        for(int i=1;i<=b;i++){
            valor_pot *= a;
        }
return valor_pot;
}


int main(){
    setlocale(LC_ALL,"");
    int n;
    float soma = 0;
    int x = 0;

    printf("\tDigite um valor n: ");
    scanf("%d",&n);

//Condição se o número é maior que zero
    while(n < 0){
        printf("\tDigite um valor n: ");
        scanf("%d",&n);
        x = fat(n);
    }
//Caso N seja menor que 3
    if( n < 3){
        for(int i = 3; i >= n; i--){
            soma += (float)(fat(i)/(float)(potencia(i,i)));
        }
    }

//Caso N seja maior que 3
    else{
        for(int i = 3; i <= n; i++){
            soma += ((float)fat(i)/(float)(potencia(i,i)));
        }
    }
    printf("\tO valor do somatorio eh: %.3f",soma);
return 0;
}
