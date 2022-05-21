/*12) Faça um programa para calcular e mostrar o valor de PI, usando a série:
PI=4- 4/3 + 4/5 – 4/7 + 4/9 -... até que um termo seja menor do que 0.0001, em valor absoluto. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"");
    float pi = 0;
    int i=1;
    float k=4;
    float cond= 100;
    int contador = 0;
    float teste = 10;

    while (cond >= 0.0001){
            if(contador % 2 == 1){
                pi -= k/i;
            } else if (contador % 2 == 0){
                pi += k/i;
            }
        contador++;
        cond = abs(k/i); // Pegando o valor absoluto do termo.
        i+=2;
        printf("\nValor de i: %d",i);
        printf("\nValor de Cond: %f",cond);
        printf("\nValor de pi é: %.4f",pi);
    }




return 0;
}

