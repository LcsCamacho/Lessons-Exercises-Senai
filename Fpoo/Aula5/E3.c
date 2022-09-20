//3 - Faça um programa onde o usuário digite um valor, e imprima na tela todos os valores entre 0 e o
//valor digitado

#include<stdio.h>
int main(){
	int i,valorDigitado;
	
	//entrada
	printf("Digite um valor inteiro maior que 1: ");
		scanf("%d",&valorDigitado);
		
	//processamento e saida
	for(i=0;i<=valorDigitado;i++){
		printf("%d ",i);
	}
	
}
