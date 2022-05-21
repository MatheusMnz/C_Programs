#include <stdio.h>
#include <stdlib.h>

int day, month, year;
int sum_days=0;
int sum_days_month=0;

int days_of_month[] = {31,28,31,30,31,30,31,30,31,30,31,30};
int days_of_month_bi[] = {31,29,31,30,31,30,31,30,31,30,31,30};



int bissexto (int check_year){
	if(check_year % 100 != 0 && check_year % 4 == 0){
		return 1;
	}

	else if (check_year % 100 == 0 && check_year % 400 == 0){
		return 1;

	}
	else{
		return 0;
	}

}

int days_traveled (int a,int b,int c){
	if(bissexto(c))
	{

	    for(int i=0;i<b-1;i++)
		{
			sum_days_month += days_of_month_bi[i];
		}
		sum_days = a + sum_days_month;
	}

	else
	{
		for(int i=0;i<b-1;i++){
			sum_days_month += days_of_month[i];
		}
		sum_days = a + sum_days_month;

	}

	return sum_days;
}

int main (){
	printf("Digite o dia, mes e ano: ");
	scanf("%d %d %d",&day,&month,&year);
	days_traveled(day,month,year);
	printf("Dias percorridos: %d",sum_days);

	return 0;
}

//Meses Ímpares tem 31 dias
//Meses Pares tem 30 dias, exceto fevereiro
