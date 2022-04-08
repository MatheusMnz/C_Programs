#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float s = 0;
    int i=1;
    float k=1;

    while (i <= 50){
        s = s + k/i;
        i++;
        k += 2;
        printf("\nValor de S é: %.2f",s);
    }

return 0;
}
