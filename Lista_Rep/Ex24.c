#include <stdlib.h>
#include <stdio.h>

int main(){

    float num,valorfinal;
    int notas100=0,notas50=0,notas20=0,notas10=0,notas5=0,notas2=0,moedas1=0,moedas05=0,moedas025=0,moedas010=0,moedas005=0,moedas001 = 0;
    printf("Digite um número com duas casas decimais:  ");
    scanf("%f",&num);

    printf("VALOR INICIAL %.2f",num);

   while(num > 0.001){
        if(num >= 100.00){
            num = num - 100;
            notas100++;
        }
        if(num >= 50.00 && num < 100.00){
            num = num - 50;
            notas50++;
        }
        if(num >= 20.00 && num <50.00){
            num = num - 20;
            notas20++;
        }
        if(num >= 10.00 && num <20.00){
            num = num - 10;
            notas10++;
        }
        if(num >= 5.00 && num <10.00){
            num = num -5;
            notas5++;
        }
        if(num >= 2.00 && num <5.00){
            num = num - 2;
            notas2++;
        }
        if(num >= 1.00 && num <2.00){
            num = num - 1;
            moedas1++;
        }
        if(num >= 0.5 && num <1){
            num = num - 0.5;
            moedas05++;
        }
        if(num >= 0.25 && num <0.5){
            num = num - 0.25;
            moedas025++;
        }
        if(num >= 0.1 && num <0.25){
            num = num - 0.1;
            moedas010++;
        }
        if(num >= 0.05 && num <0.1){
            num = num - 0.05;
            moedas005++;
        }
        if(num >= 0.01 && num <0.05){
            num = num - 0.01;
            moedas001++;
        }
        if(num < 0.00999){
            break;
        }

    }

    printf("\nNotas:");
    printf("\n(%d) notas de R$100.00",notas100);
    printf("\n(%d) notas de R$50.00",notas50);
    printf("\n(%d) notas de R$20.00",notas20);
    printf("\n(%d) notas de R$10.00",notas10);
    printf("\n(%d) notas de R$5.00",notas5);
    printf("\n(%d) notas de R$2.00",notas2);
    printf("\nMOEDAS:");
    printf("\n(%d) moedas de R$1.00",moedas1);
    printf("\n(%d) moedas de R$0.50",moedas05);
    printf("\n(%d) moedas de R$0.25",moedas025);
    printf("\n(%d) moedas de R$0.10",moedas010);
    printf("\n(%d) moedas de R$0.05",moedas005);
    printf("\n(%d) moedas de R$1.00",moedas001);
return 0;
}
