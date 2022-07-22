#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp1 = fopen("ci.txt", "r");
    FILE *fp2 = fopen("totais.txt", "w");

    //Criando o vetor para armazenar a matrícula
    int *matricula = malloc(1*sizeof(int));

    //Criando o vetor para armazernar a soma
    float *soma = malloc(1 * sizeof(int));

    //Númeor de ligações
    int num;    
    float soma_time=0;    float somav=0, somatotal=0;
    int cont=0;

    //Percorrer o arquivo e ler a matricula e o num de ligação;
    //--------------Problema: Ele printa a matrícula que não deveria aparecer
    for(int i=0; fscanf(fp1,"%d %d",&matricula[i],&num) != EOF; i++, cont++){
        matricula = realloc(matricula, (i+1) * sizeof(int));
            for(int j=0; j<num;j++){
                fscanf(fp1,"%f",&soma_time);
                somav += soma_time;
                somatotal+= soma_time;
            }
            soma[i] = somav;
            somav = 0;
            soma = realloc(soma,(i+1)*sizeof(float));
    }

    printf("Matrícula: \n");
    for(int i=0; i<4;i++){
        printf("%d\n",matricula[i]);
    }
    printf("Soma: \n");
    for(int i=0; i<4;i++){
        printf("%.2f\n",soma[i]);
    }
    for(int i=0; i<cont;i++){
        fprintf(fp2,"%d %.1f\n",matricula[i], soma[i]);
        if(i==cont-1){
            fprintf(fp2,"%.1f",somatotal);
        }
    }

}