#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int cifra,somacifra = 0;
    int cifra5;
    int x;
    int somatoriototal = 0;

    for(int i = 0; i < 1000;i++){
            x = i;
            somacifra = 0;
            cifra5 = i % 10; // Analisando o ultimo algarismo
       do {
            cifra = x % 10;
            somacifra += cifra;
            x /= 10;
         } while (x != 0);

        if(somacifra % 3 == 0){
            somatoriototal += i;
        }else if(cifra5 == 0 || cifra5 == 5){
            somatoriototal += i;
        }
    }
        printf("Somatorio total: %d",somatoriototal);
return 0;
}
