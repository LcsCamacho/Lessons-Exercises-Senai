#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Desenvolva um programa que leia o nome e o preço de uma mercadoria. 
//O programa deverá calcular um aumento de 5% no preço da mercadoria e 
//mostrar o nome da mercadoria e o seu novo preço.

int main(){
	//variaveis
	float precoFinal, preco;	
	char nome[10];
	
	//Configuração para utilizar pontuação
	setlocale(LC_ALL,"");
    
    //entrada
	printf("--------------------------------");
	printf("\n");
	printf("Digite o nome do produto: ");
		scanf("%s",&nome);
	printf("\n");
	printf("Digite o preço: ");
		scanf("%f", &preco);		
	
		
	//processamento
	
	precoFinal = (float) preco + preco * 5 / 100;
	
	//saida	
	printf("--------------------------------");
	printf("\n");
	printf("O produto %s ",nome);
	printf("a partir de agora tera um valor de : %.2f",precoFinal);	
			
}
