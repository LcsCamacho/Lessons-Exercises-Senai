//-Desenvolva um programa que leia o preço de um 
//produto e se o preço for maior do que 1000 
//reais aplique um desconto de 8%. Mostre o preço final

#include <locale.h>
#include <stdio.h>

int main(){
	//Variáveis e Configurações
	setlocale(LC_ALL,"");
	int produto;
	float desconto;
	
	
	//Entradas
	printf("--------------------------------\n");
	a("Digite valor do produto:\n");	
	scanf("%d",&produto);
	
		
	//Processamento
	desconto = (produto / 100) * 8;
	if(produto>1000){
		printf("Seu produto tem desconto de 8%% e sera reajustado para %.2f: ",desconto);
	}else{
		printf("Seu produto nao tem desconto");
	}
	//Saídas
}
