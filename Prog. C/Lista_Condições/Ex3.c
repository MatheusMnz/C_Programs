#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int x = 4;
    int y = 6;

    if(x > y){
        printf("X � maior!");
    }
        else{
            printf("Y � maior");
        }

return 0;
}
