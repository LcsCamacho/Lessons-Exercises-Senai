//-Desenvolva um programa que leia o pre�o de um 
//produto e se o pre�o for maior do que 1000 
//reais aplique um desconto de 8%. Mostre o pre�o final

#include <locale.h>
#include <stdio.h>

int main(){
	//Vari�veis e Configura��es
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
	//Sa�das
}
