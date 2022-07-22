#include <stdio.h>
#include <stdlib.h>


struct nascimento{
    int dia;
    int mes;
    int ano;
};


struct pessoa{
    char nome[100];
    struct nascimento nasc;
    char cpf[11];
};

void preencher( struct pessoa *ptr){
    printf("Digite seu nome: ");
    scanf("%s", ptr -> nome);
    printf("\nDigite seu dia de nascimento: ");
    scanf("%d", ptr -> nasc.dia);
    printf("\nDigite seu mes de nascimento: ");
    scanf("%d", ptr -> nasc.mes);
    printf("\nDigite seu ano de nascimento: ");
    scanf("%d", ptr -> nasc.ano);
    printf("\nDigite seu CPF: ");
    scanf("%s", ptr -> cpf);
}


int main(){
   struct pessoa person;
   struct pessoa *ptrpessoa;
    ptrpessoa = &person;

    preencher(ptrpessoa);

}