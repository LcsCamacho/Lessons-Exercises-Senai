// Sabendo-se que a velocidade de cruzeiro de um avi�o 747-300 � de 900 km/h, 
// fa�a um programa que leia uma dist�ncia 
//(km), calcule e apresente na tela, quanto tempo (horas) ser� necess�rio 
//para um 747-300 sobrevoar a dist�ncia informada.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	 //vari�veis
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
