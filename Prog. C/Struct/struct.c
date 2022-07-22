#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    char nome[20], rua[50];
    int idade, numero;
};




int main(){
    char nome[20], rua[20];
    int idade, numero;

    struct pessoa p;
    p.idade = 20;//Atribuição
    scanf("%d",&p.numero); //Leitura
    gets(p.nome);//Leitura
    p.numero = p.numero + p.idade + 5;

    struct pessoa p2 = {"matheus","Manoel aramuni", 20, 55}; //não inicializadas começam com zero.

    //Estruturas suportam atribuição
    struct pessoa p3;
    p3 = p2;

    struct pessoa p4[4];
    int i;
    for (i=0;i<4;i++){
        gets(p[i].nome);
        scanf("%d", &p[i].idade);
        gets(p[i].rua);
        scanf("%d", &p[i].numero);
    }




}