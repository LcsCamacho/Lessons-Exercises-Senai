//1 - Crie uma fun��o que receba um n�mero decimal e imprima sua representa��o em bin�rio.

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
	printf("Calculadora de Decimal para Bin�rio. Digite o n�mero desejado:");
	scanf("%d",&a);
	conversorBinario(a);
	
}


