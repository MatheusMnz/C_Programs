#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int valor,numdivi = 0, maior;
    int divisor = 0,contador;
    int menorvalor = 0;
    int teste,menornumeroint;
    int numgrande = 10001;


    // Achar a quantidade de divisores de cada n�mero
    for(int i = 1; i<10000;i++){ //Percorrendo os n�meros
        contador=0;
        for(int j = 1; j<10000;j++){ //Dividindo os n�meros
            if(i % j == 0){
                contador++;
            }
        }

        if(numdivi < contador){ // Ok
            numdivi = contador;
        }
        printf("\nN�mero = %d, divisores =  %d",i,contador);
    }
            printf("\n Divisores de 7560:");


    //////////////////////// Parte 2 pra identificar o menor n�mero
    for(int i = 1; i<10000;i++){ //Percorrendo os n�meros
        contador=0;
        for(int j = 1; j<10000;j++){ //Dividindo os n�meros
            if(i % j == 0){
                contador++;
                if(i == 7560){
                printf("\n\t%d",j);
                }
            }
        }
            if (i < numgrande && contador == numdivi){
                numgrande = i;
                menornumeroint = i;
            }
    }


    printf("\nMenor n�mero inteiro: %d",menornumeroint);
    printf("\nO maior n�mero divisores que um n�mero possui �: %d ",numdivi);

    return 0;
}
