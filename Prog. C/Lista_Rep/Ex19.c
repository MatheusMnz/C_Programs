#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    int numero;
    int contador=0;
    int maior = 0;
    int menor = 9999999999999999999999999;

    do{
        contador++;
        printf("Digite o %d o numero: ",contador);
        scanf("%d",&numero);
        if(maior < numero){
            maior = numero;
        }
        if (menor > numero){
            menor = numero;
        }

    }while(contador<10);

    printf("\nO maior número é: %d", maior);
    printf("\nO menor número é: %d", menor);

    return 0;
}
