#include <stdio.h>
#include <stdlib.h>

void mostrarPolinomio(float p[6], int tam){
    int grau = tam - 1;
    int i;
    for (i=0; i<tam; i++){
        printf("%.2fx^%d ", p[i], grau);
        grau--;
    }
}

int main()
{
    //float pol[6] = {3, -2, 1.2, 9, -3, 11};
    float pol[6];
    int i;

    for(i=0; i<6; i++){
        printf("insira 6 valores:");
        scanf("%f", &pol[i]);
    }

    float d1[5];
    int grau1 = 5, p = 5;

    for (i=0; i < grau1; i++){
        d1[i] = pol[i] * p;
        p--;
    }

    float d2[4];
    int grau2 = 4, h = 4;
    for (i=0; i < grau2; i++){
        d2[i] = h * d1[i];
        h--;
    }

    float d3[3];
    int grau3 = 3, f = 3;
    for (i=0; i < grau3; i++){
        d3[i] = f * d2[i];
        f--;
    }

    mostrarPolinomio(pol,6);
    printf("\n");
    mostrarPolinomio(d1,5);
    printf("\n");
    mostrarPolinomio(d2,4);
    printf("\n");
    mostrarPolinomio(d3,3);
}