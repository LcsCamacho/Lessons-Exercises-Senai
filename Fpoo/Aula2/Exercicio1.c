#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Desenvolva um programa que leia a velocidade de um carro (km/h) e a 
//dist�ncia a ser percorrida (km) por ele. Calcule e 
//apresente na tela, quanto tempo (horas) ser� necess�rio 
//para o carro percorrer a dist�ncia informada.
int main(){
	//variaveis
    setlocale(LC_ALL,"");
    int velocidade,distancia;
	float tempo;
    //entrada
	printf("--------------------------");
	printf("\n");
	printf("Digite a velocidade em media do ve�culo: ");
		scanf("%d", &velocidade);		
	printf("Digite a distancia a ser percorrida: ");
		scanf("%d", &distancia);
	
		
	//processamento
	tempo = (float) distancia/velocidade;
	
	
	
	//saida	
	printf("A quantidade de tempo em horas � %.2f",tempo);
			
}
