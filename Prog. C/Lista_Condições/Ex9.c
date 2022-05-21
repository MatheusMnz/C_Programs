#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int x,y;
    printf("Digite a Coordenada X do ponto: ");
    scanf("%d",&x);
    printf("Digite a Coordenada Y do ponto: ");
    scanf("%d",&y);

    if(x == 0 && y == 0){
        printf("A coordenada é na Origem");
        }
    else if (y == 0 &&  x!=0){
        printf("Ponto sobre o o Eixo X");
        }
    else if (x == 0 &&  y!=0){
        printf("Ponto sobre o o Eixo Y");
        }
    else if (x >0 && y > 0){
        printf("Ponto sobre o primeiro Quadrante");
        }
    else if (x <0 &&  y> 0){
        printf("Ponto sobre o segundo Quadrante");
        }
    else if (x <0 &&  y< 0){
        printf("Ponto sobre o Terceiro Quadrante");
        }
    else {printf("Ponto Sobre o Quarto Quadrante");}

return 0;
}

