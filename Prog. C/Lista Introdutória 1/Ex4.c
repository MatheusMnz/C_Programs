#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL, "Portuguese");

   int tempomin = 35;
   int velocidade = 80;
   float quilometros = 0;
   float litrosgaso = 0;

    quilometros = (tempomin * velocidade) / 60;
    printf("\nQuilometros = %.3f", quilometros);

    litrosgaso = quilometros/ 12;
    printf("\nLitros de gasolina = %.3f", litrosgaso);



return 0;
}
