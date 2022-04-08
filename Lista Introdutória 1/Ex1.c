
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL, "Portuguese");


    int faces = 6, arestas = 12;
    int numvert;

     numvert = arestas + 2 - faces;
    printf("Numero de vértices = %d", numvert);

return 0;
}
