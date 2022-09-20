//Desenvolva um programa que leia o nome de uma cidade, o número total de eleitores 
//e o número total de votos apurados na última eleição. O
//programa deverá calcular e exibir a porcentagem de participação dos eleitores 
//desta cidade na última eleição.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	//variaveis
	float eleitoresTotais, votosTotais,porcentagem;	
	char nome[10];
	
	//Configuração para utilizar pontuação
	setlocale(LC_ALL,"");
    
    //entrada
	printf("--------------------------------");
	printf("\n");
	printf("Digite o nome da cidade: ");
		scanf("%s",&nome);
	printf("\n");
	printf("Digite o numero total de eleitores na ultima eleiçao: ");
		scanf("%f", &eleitoresTotais);
	printf("\n");
	printf("Digite o numero total de votos na ultima eleiçao: ");
		scanf("%f", &votosTotais);		
	
		
	//processamento
	votosTotais = votosTotais*100;
	votosTotais = votosTotais/eleitoresTotais;
	porcentagem = votosTotais;
	
	
	//Regra de Três
	//votos totais * 100				|20 * 100	 |
	//eleitores totais * x				|100 * x	 |
	//votostotais						|2000		 |
	//votostotais/eleitorestotais=x		|2000/100=20 |
		
	
	
	//saida	
	printf("--------------------------------");
	printf("\n");
	printf("A porcentagem de votos foi %.2f%%",porcentagem);	
			
}
