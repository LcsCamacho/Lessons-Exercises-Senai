//Desenvolva um programa que leia o nome de uma cidade, o n�mero total de eleitores 
//e o n�mero total de votos apurados na �ltima elei��o. O
//programa dever� calcular e exibir a porcentagem de participa��o dos eleitores 
//desta cidade na �ltima elei��o.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	//variaveis
	float eleitoresTotais, votosTotais,porcentagem;	
	char nome[10];
	
	//Configura��o para utilizar pontua��o
	setlocale(LC_ALL,"");
    
    //entrada
	printf("--------------------------------");
	printf("\n");
	printf("Digite o nome da cidade: ");
		scanf("%s",&nome);
	printf("\n");
	printf("Digite o numero total de eleitores na ultima elei�ao: ");
		scanf("%f", &eleitoresTotais);
	printf("\n");
	printf("Digite o numero total de votos na ultima elei�ao: ");
		scanf("%f", &votosTotais);		
	
		
	//processamento
	votosTotais = votosTotais*100;
	votosTotais = votosTotais/eleitoresTotais;
	porcentagem = votosTotais;
	
	
	//Regra de Tr�s
	//votos totais * 100				|20 * 100	 |
	//eleitores totais * x				|100 * x	 |
	//votostotais						|2000		 |
	//votostotais/eleitorestotais=x		|2000/100=20 |
		
	
	
	//saida	
	printf("--------------------------------");
	printf("\n");
	printf("A porcentagem de votos foi %.2f%%",porcentagem);	
			
}
