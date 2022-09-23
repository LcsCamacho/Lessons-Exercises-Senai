//1 - Crie uma função que receba um número decimal e imprima sua representação em binário.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stddef.h>
#include<locale.h>


int a,i,decimal,binario[99],resto;


void conversorBinario(int decimal){
	//processamento
	while(decimal!=0){
		resto=decimal%2;
		decimal=decimal/2;
		
		if (resto==0)binario[i]=0;
		else if(resto == 1)binario[i]=1;
		i++;
	}
	i = i-1;
	for(i;i>=0;i--) {
		printf("[%d]",binario[i]);
	}

}
int main(int argc, char*argv[]){		
	setlocale(LC_ALL,"");
	//entrada
	printf("Calculadora de Decimal para Binário. Digite o número desejado:");
	scanf("%d",&a);
	conversorBinario(a);
	
}


