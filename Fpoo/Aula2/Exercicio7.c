#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Um caminh�o consegue transportar 18 toneladas de laranjas em uma viagem que faz entre a 
//fazenda e a f�brica de suco de laranja. Um alqueire de terra produz em m�dia 250 toneladas de laranjas. 
//Fa�a um programa que leia quantos caminh�es e quantos alqueires uma fazenda produtora de laranjas 
//possui, calcule e apresente na tela quantas viagens de caminh�o ser�o necess�rias para 
//transportar toda a colheita de laranjas.

int main(){
	setlocale(LC_ALL,"");
	//variaveis
	int alqueires,caminhoes,voltas;

	//entrada
	printf("--------------------------");
	printf("\n");
	printf("Digite o total de alqueires ");
		scanf("%d",&alqueires);
	printf("Digite o total de caminhoes ");
		scanf("%d",&caminhoes);
		
	//processamento
	caminhoes = caminhoes * 18;
	alqueires = alqueires * 250;
	voltas = alqueires / caminhoes;
	
	//saida
	printf("O total de voltas �: %d", voltas);	
}
