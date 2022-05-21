#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int x = 4;
    int y = 6;

    if(x > y){
        printf("X é maior!");
    }
        else{
            printf("Y é maior");
        }

return 0;
}
