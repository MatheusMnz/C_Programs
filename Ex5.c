#include <stdio.h>
#include <stdlib.h>

int year;

int bissexto (int check_year){
	if(check_year % 100 != 0 && check_year % 4 == 0){
		printf("1");
		return 1;
	}

	else if (check_year % 100 == 0 && check_year % 400 == 0){
		printf("1");
		return 1;

	}
	else{
		printf("0");
		return 0;
	}

}


int main (){

	printf("Insert a Year: ");
	scanf("%d",&year);
	bissexto(year);




	return 0;
}
