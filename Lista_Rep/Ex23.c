/*23) Implemente um programa que solicita ao usu�rio um valor inteiro correspondente � idade
de uma pessoa em dias e informe�a em anos, meses e dias.
Obs.: apenas para facilitar o c�lculo, considere todo ano com 365 dias e todo m�s com 30 dias. Nos
casos de teste nunca haver� uma situa��o que permite 12 meses e alguns dias, como 360, 363 ou
364. Este � apenas um exerc�cio com objetivo de testar racioc�nio matem�tico simples.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    int dias;
    int valor_anos = 0;
    int Meses_em_dias = 0;
    int Dias_final = 0;
    int valor_meses = 0;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um n�mero de dias:  ");
    scanf("%d", &dias);

    //Anos
    if(dias > 365){
        valor_anos = dias/365;
    }



   // if(dias % 365 == 0){
    //    valor_anos = dias / 365;
   // }
    //Meses
    Meses_em_dias = dias - valor_anos * 365;
    if(Meses_em_dias > 30){
        valor_meses = Meses_em_dias / 30;
    }
    //Dias
    Dias_final = Meses_em_dias - valor_meses * 30;

    printf("A pessoa possui %d Anos, %d Meses e %d dias.", valor_anos, valor_meses, Dias_final);

return 0;
}
