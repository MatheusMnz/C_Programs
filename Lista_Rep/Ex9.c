#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;
/*Dado o valor de E, calcular S=1 + 1/2 + 1/4 +1/6 + � at� que um termo da s�rie seja menor do que
E. O valor de E dever� ser digitado pelo usu�rio.*/

int main() {
     setlocale(LC_ALL, "");
    float e = 0.0001;
    float s = 1;
    float x;
    int i=2;

    while(s>e){
        s += (1/i);
        x = (1/i);
        if(x < e){
            cout>>("Achou um termo menor.");
            break;
        }
        i+=2;
    }
    cout>>("O valor de S: %f",s);

 return 0;
}
