int main() {
     int i, divisores, valor = 0;
     do {
           divisores = 0;
           valor++;
           for (i = 1;i <= 20; i++) {
                if (valor % i == 0){
                       divisores++;
                }
            }
       }while (divisores != 20);
     printf ("Valor: %d\n\n", valor);

     return 0;
}
