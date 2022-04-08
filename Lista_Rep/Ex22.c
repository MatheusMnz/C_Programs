#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale(LC_ALL,"Portuguese");
    int horasinicio;
    float minutosinicio;
    int horastermino;
    float minutostermino;
    int  tempo_minutos_inicio;
    int  tempo_minutos_fim,tempo_evento_minutos;
    int duracao_min;
    int duracao_horas = 0;
    int somaminutos;

 do{
    printf("\nDigite a hora que Começou: ");
    scanf("%d",&horasinicio);
    printf("\nDigite em que minuto Começou: ");
    scanf("%f",&minutosinicio);
    printf("\nDigite a hora que Terminou: ");
    scanf("%d",&horastermino);
    printf("\nDigite em que minuto Terminou: ");
    scanf("%f",&minutostermino);
 }while(horasinicio && minutosinicio <= 0);

  //Calculo de horas
  //Convertendo tudo para minutos:
    tempo_minutos_inicio = horasinicio * 60 + minutosinicio; //ok
    tempo_minutos_fim = horastermino * 60 + minutostermino; //ok

    if(tempo_minutos_inicio <= tempo_minutos_fim){ //ok
        duracao_min = tempo_minutos_fim - tempo_minutos_inicio;
        duracao_horas = duracao_min / 60;

    }

    if (tempo_minutos_inicio >= tempo_minutos_fim){ //ok
         duracao_min = 1440 - tempo_minutos_inicio + tempo_minutos_fim;
         duracao_horas = duracao_min / 60;
    }

    //Minutos
    if(minutosinicio >= minutostermino){
        somaminutos = minutosinicio + minutostermino;
        if(somaminutos  >= 60){
           somaminutos = somaminutos - minutosinicio;
        }
    }

    if(minutosinicio <= minutostermino){
        somaminutos = minutosinicio + minutostermino;
        if(somaminutos  >= 60){
           somaminutos = somaminutos - minutostermino;
        }
    }
    printf("\nO evento durou %d horas e %d minutos",duracao_horas,somaminutos);
return 0;
}
