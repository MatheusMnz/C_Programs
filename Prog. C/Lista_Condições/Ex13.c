#include <stdio.h>

int main() {
    float nota;
    int faltas;

    printf("Digite a sua Nota: ");
    scanf("%f",&nota);
    printf("Digite o numero de faltas: ");
    scanf("%d",&faltas);

    if(nota < 60){
        printf("Reprovado por media.");
    } else if (nota > 60 && faltas > 18){
        printf("Reprovado por faltas.");
    } else if (nota > 60 && faltas < 18){
        printf("Aprovado.");
    } else printf ("Reprovado");

return 0;
}
