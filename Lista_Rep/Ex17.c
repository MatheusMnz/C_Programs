#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num = 10;
    printf("Combinações possíveis:");
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6; j++){
            for(int k = 1; k <=6; k++){
                if(i + j +k == num){
                    printf("\n%d, %d, %d",i,j,k);
                }
            }
        }
    }

     return 0;
}
