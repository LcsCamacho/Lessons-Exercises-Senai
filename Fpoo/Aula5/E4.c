//4 - Faça um programa onde o usuário digite dois valores, e imprima na tela todos os valores no intervalo entre os valores digitados. 

#include<stdio.h>
int main(){
	//variaveis
	int valorDigitado1,valorDigitado2;
	
	
	//entrada
	printf("Digite um valor inteiro maior ou igual a 1: ");
		scanf("%d",&valorDigitado1);
	printf("Digite um valor inteiro maior que 10: ");
		scanf("%d",&valorDigitado2);
		
	//processamento e saida
	for(valorDigitado1=valorDigitado1;valorDigitado1<=valorDigitado2;valorDigitado1++){
		printf("%d|",valorDigitado1);
	}
}
