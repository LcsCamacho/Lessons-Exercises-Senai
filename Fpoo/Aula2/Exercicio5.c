// Sabendo-se que a velocidade de cruzeiro de um avião 747-300 é de 900 km/h, 
// faça um programa que leia uma distância 
//(km), calcule e apresente na tela, quanto tempo (horas) será necessário 
//para um 747-300 sobrevoar a distância informada.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	 //variáveis
	float tempo;
	int distancia;
	int velocidade = 900;
    setlocale(LC_ALL,"");
    
    //entrada
	printf("--------------------------");
	printf("\n");
	printf("Digite a distancia em km ");
		scanf("%d", &distancia);	

	//processamento
	tempo = (float) distancia/velocidade;
	
	
	//saida	
	printf("o tempo sera de %.2f", tempo);	
	printf(" Horas");		
}
