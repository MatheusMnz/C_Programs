#include <stdio.h>
#include <stdlib.h>

int mmc(int number1, int number2){

    int multiplica = number1*number2;
    int count=0;
    int count2=0;
    int vetor_primos[multiplica];
    int position = 0;
    int produto = 1;


//Função para criar o vetor primo
    for(int i = 1; i<= multiplica; i++){
        count = 0;
        for(int j = 1; j <= i ; j++){
            if(i %j == 0){
                count++;
            }else {;}
        }

        if(count == 2){
            vetor_primos[count2] = i;
            count2++;
        } else{continue;}
    }
//Fim da função criar vetor primo




    while((number1 * number2) != 1){
        int pass1=0;
        int pass2=0;

        if(number1 % (vetor_primos[position]) == 0){
            number1 /= (vetor_primos[position]);
            pass1++;
        }


        if(number2 % (vetor_primos[position]) == 0){
            number2 /= (vetor_primos[position]);
            pass2++;
        }


        if((pass1 || pass2) != 0){
            produto = produto * (vetor_primos[position]);
        }

        if(!pass1 && !pass2){
            position++;
        }

        if(position == count2){
            break;
        }
    }
    return produto;
}






int main (){
    int num1,num2,x;


    printf("Insert two numbers: ");
    scanf("%d %d",&num1,&num2);


    x = mmc(num1,num2);
    printf("\tMMC = %d", x);


    return 0;
}

