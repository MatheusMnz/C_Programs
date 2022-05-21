#include <stdio.h>
#include <stdlib.h>


int next_prim(int num){
    int vetor_primos[2*num];
    int count=0;
    int count2=0;
    
    for(int i = 1; i<= 2*num; i++){
        count = 0;
        for(int j = 1; j <= i ; j++){
            if(i %j == 0){
                count++;
            }else {;}
        }

        if(count == 2){
            vetor_primos[count2] = i;
              if(vetor_primos[count2]>num){
                return vetor_primos[count2];
              }
            count2++;
        } else{continue;}
    }
}


int main(){
    int num1;
    int x;

    printf("Digite um numero: ");
    scanf("%d",&num1);

    x = next_prim(num1);
    printf("O proximo primo e: %d",x);

    return 0;
}