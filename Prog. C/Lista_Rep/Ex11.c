#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float s = 0;
    int i;
    float k=1;

    while (i< 100){
            i = k * k;
            printf("\nValor de i: %d",i);
        if(i % 2 == 0){
            s = s - k/i;
        } else if (i % 2 == 1){
            s = s + k/i;
        }
        printf("\nValor de K: %f",k);
        k++;
        printf("\nValor de S: %f",s);
    }

return 0;
}
