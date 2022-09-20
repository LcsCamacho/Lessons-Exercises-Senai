//5 - Faça um programa que imprima na tela todos os números pares de um intervalo informado pelo 
//usuário. 

#include<stdio.h>
int main(){
	//variaveis
	int i,valorDigitado1,valorDigitado2;
	
	
	//entrada
	printf("Digite um valor inteiro maior ou igual a 1: ");
		scanf("%d",&valorDigitado1);
	printf("Digite um valor inteiro maior que 10: ");
		scanf("%d",&valorDigitado2);
		
	//saida
	for(i=0;i<=valorDigitado2;i+=2){
		printf("%d ",i);
	}
}
