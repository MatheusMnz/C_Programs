#include <stdio.h>
#include <stdlib.h>

char toLower(char aux){
    if(aux >= 'A' and aux <= 'Z')
        return aux - 'A' + 'a';
 return aux;
} 

int main(){
    int testes;
    char string[200];
    char alfabeto[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    printf("Insira a quantidade de testes: ");
    scanf("%d",&testes);
    getchar();
    printf("\nInsira a String: ");
    fgets(string,200,stdin);

    for(int i=0; string[i] != '\0';i++){
        var = toLower(string[i]);
        for(int j=0; alfabeto[j] != '\0'; j++){
            if( var ==  alfabeto[j]){
                switch(j){
                    case 1:
                        cont_a++;
                        break;
                    case 2:
                        cont_b++;
                        break; 
                    case 3:
                        cont_c++;
                        break; 
                    case 4:
                        cont_d++;
                        break;
                    case 5:
                        cont_e++;
                        break; 
                    case 6:
                        cont_f++;
                        break;
                    case 7:
                        cont_g++;
                        break;
                    case 1:
                        cont_a++;
                        break;
                    case 1:
                        cont_a++;
                        break;
                    case 1:
                        cont_a++;
                        break;
                    case 1:
                        cont_a++;
                        break;
                    case 1:
                        cont_a++;
                        break;
                    case 1:
                        cont_a++;
                        break;
                    case 1:
                        cont_a++;
                        break;                 
                }
            }

        }
    }





    printf("\n");
}