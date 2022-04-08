#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>

using namespace std;
/*Dado o valor de E, calcular S=1 + 1/2 + 1/4 +1/6 + … até que um termo da série seja menor do que
E. O valor de E deverá ser digitado pelo usuário.*/

int main(){
    float e;
    cout << "Digite seu numero: ";
    cin >> e;
    float s = 1;
    float x=1;
    float i=2;

    while(x>e){
        s += (1/i);
        x = (1/i);
        i+=2;
        printf("\nO valor de s e: %.3f",s);
        if(x <= e){
            cout << "\n\nAchou um termo menor";
            break;
        }
    }
        cout << "O valor de S é:" << s;

 return 0;
}
