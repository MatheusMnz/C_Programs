#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite 3 numeros:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > c) {
        int aux = c;
        c = a;
        a = aux;
    }
    if (a > b) {
        int aux = b;
        b = a;
        a = aux;
    }
    if (b > c) {
        int aux = c;
        c = b;
        b = aux;
    }
    printf("%d %d %d", a, b, c);
}
