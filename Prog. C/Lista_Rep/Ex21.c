#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*int main(){
    setlocale(LC_ALL,"Portuguese");
    int a, n1, n2,resto=0;
    int resto2=0;
    int maior = 0;
    int posicao=0;
    int mexerlista = 0;
    int *listaresultado = 0;
    int contador,produto;

//Recebi 2 numeros
    printf("Digite três numeros: ");
    scanf("%d%d%d",&n1,&n2);

//Verificando qual o maior valor para saber até onde vai o laço for
    if(maior < n1){
        maior = n1;
    }
    if(maior < n2){
        maior = n2;
    }
//Criando um Vetor com tamanho maximo igual o do maior número
    int lista[maior];

//Listando os números primos  || Parte Ok
    for(int i = 1; i<= maior;i++){ //Percorrendo os números
        contador=0;
        for(int j = 1; j<maior;j++){ //Dividindo os números
            if(i % j == 0){
                contador++;
            }
        }

        if(contador == 2){   // Verificação se o número é divisível por 1 e por ele mesmo.
            printf("\nO número %d é primo.");
            lista[posicao] = i; //Armazenando o valor do número primo na lista [0,1,2,3]
            posicao++;
        }
    }
//Dividir os números pelos primos
    do{
        if(n1 % lista[mexerlista] == 0){
            printf("Valor de n1 antes = %d\n",n1);
            n1 /= lista[mexerlista];  // n1 passa a valer o que ele foi dividido ex: 4/2, passa a valer 2.
            printf("Valor de n1 depois = %d\n",n1);
            listaresultado[mexerlista] = *&n1;  //Armazena o valor do primo que foi divisível.
        } else {continue;}

        if(n2 % lista[mexerlista] == 0){
            n2 /= lista[mexerlista];  // n1 passa a valer o que ele foi dividido ex: 4/2, passa a valer 2.
            listaresultado[mexerlista] = *&n2;  //Armazena o valor do primo que foi divisível.
        } else {continue;}
        mexerlista++;
    }while(n1+n2+n3 != 3);


printf(sizeof(listaresultado));

for (int i = 0; i < sizeof(listaresultado); i++) {
    produto *= listaresultado[i];
}

printf("Produto = %d",produto);


    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int divisor(int a,int b);
int main(void)
{
    setlocale(LC_ALL,"Portuguese");
	//definindo as variaveis
	int num1,num2;
	int num_primo=2;
	int mmc =1;
    printf("\nDigite 2 números: ");
	scanf("%d %d",&num1,&num2);

	//criando loop ate termina o MMC
	while((num1*num2 !=1)){
		int pass =0;

		//condição para ver se algum dos dois é divisivel pelo numero primo atual
		if((divisor(num1,num_primo) != num1) || (divisor(num2,num_primo) != num2)){
			pass++;
			num1 = divisor(num1,num_primo);
			num2 = divisor(num2,num_primo);
		}
		//caso nenhum numero seja divisivel pelo numero primo 2 sera passado para o numero 3
		//roda apenas uma vez essa condição
		if(pass== 0 && num_primo !=2)
			num_primo+= 2;
		//caso nehum numero seja divisivel pelo numero primo atual sera passado para o proximo numero impar
		if(pass ==0 && num_primo ==2)
			num_primo++;
		//caso algun dos numeros seja divisivel pelo numero primo atual, adiciona esse valor ao mmc
		// e não altera o numero primo atual para checar se da para dividir mais uma vez no proximo loop
		if(pass !=0)
			mmc = mmc*num_primo;


	}

	printf("\n seu MMC é %d \n",mmc);
}
//função que checa se o num1 é divisivel pelo numero primo
int divisor(int a,int b){

	switch (a%b)
	{
	//caso com resto 0 é divisivel logo retona o numero pos divisão
	case 0:
		return a/b;
		break;

	default:
	//qualquer outro caso apenas retorna o numero novamente
		return a;
		break;
	}
}

