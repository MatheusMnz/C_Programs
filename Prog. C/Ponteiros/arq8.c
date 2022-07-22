#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int len, cont=0;
    char ch[10];
    char c;

    if((fp = fopen("arquivo07_a.txt", "r")) == NULL){
        printf("error");
        exit(1);
    }

    fseek(fp,0,SEEK_END);
    len = ftell(fp); //Tamanho do meu arquivo em bytes

    printf("Digite um caracter: ");
    scanf("%s",ch);
    int size_str=0;
    for(int i=0; ch[i] != '\0'; i++){
        size_str++; //Tamanho da minha substr
    }   
    fseek(fp,0,SEEK_SET);//Volto o ponteiro do arquivo para a posição inicial
    

    int k;
    int final_cont=0;
    for(int i=1; i<= len; i++){
        //Seto o ponteiro do meu arquivo para a posição desejada.
        fseek(fp,i-1,SEEK_SET);
        //Pego um caracter do arquivo
        c = fgetc(fp);
        //Se esse caracter for igual a primeira posição da substr, cont++
        if(c == ch[0]){
            cont++;
            k=1;
            //Loop para comparar as outras posições do arquivo com a substr
            while(!feof(fp)){
                //Pego o proximo caracter do arquivo.
                c=fgetc(fp);
                //Comparo o novo caracter com a proxima posição da substr
                if(c == ch[k]){
                    //Caso sejam iguais eu dou um cont++ e tenho que verificar se o cont = size da substr
                    cont++;
                    //Se for igual, contablizo que apareceu a palavra uma vez
                    if(cont == size_str){
                        final_cont++;
                        //Zero o cont, para voltar a comparar com outros elementos do arquivo.
                        cont = 0;
                    }
                }
                //Se o meu k = sizesubstr, tenho que zerar o meu k, para comparar dnv;
                if(k == size_str){
                    k=0;
                }
                //aumento o k para comparar com o proximo caracter
                else{
                k++;
                }
            }
        }
    }

    fclose(fp);
    printf("Aparece %d vezes",final_cont);
    printf("\n");
}