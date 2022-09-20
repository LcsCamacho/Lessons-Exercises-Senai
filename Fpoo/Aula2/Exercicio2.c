#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Desenvolva um programa que leia a velocidade de um carro (km/h) e a 
//distância a ser percorrida (km) por ele. Calcule e 
//apresente na tela, quanto tempo (horas) será necessário 
//para o carro percorrer a distância informada.
int main(){
	//variaveis
    setlocale(LC_ALL,"");
    int velocidade,distancia;
	float tempo;
    //entrada
	printf("--------------------------");
	printf("\n");
	printf("Digite a velocidade em media do veículo: ");
		scanf("%d", &velocidade);		
	printf("Digite a distancia a ser percorrida: ");
		scanf("%d", &distancia);
	
		
	//processamento
	tempo = (float) distancia/velocidade;
	
	
	
	//saida	
	printf("A quantidade de tempo em horas é %.2f",tempo);
			
}
