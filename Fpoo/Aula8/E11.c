/* TODO (#1#): (11) Crie um programa que calcule o IMC 
               (Índice de Massa Corpórea) de 5 pessoas 
               Entradas: Nome, peso e altura, Saída Nome, 
               Peso, Altura e IMC. */
               
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");

	int menu;
	float imc,altura=0.0,peso=0.0;
	
	//menu
	do{
		//entrada do peso
		printf("1- Digite o seu peso: ");scanf("%f",&peso);
		
		
		//entrada da altura
		printf("2- Digite a sua altura: ");scanf("%f",&altura);
		
		
		//processamento e saida imc
		imc=peso/(altura*altura);
		printf("\n---Processando---\nSeu IMC é:%.2f\n-----------------\n",imc);
		
		
		//informaçoes úteis ao usuário
		printf("Menos do que 18,5 = Abaixo do peso");
		printf("\nEntre 18,5 e 24,9 = Peso normal");
		printf("\nEntre 25 e 29,9 = Sobrepeso");
		printf("\nEntre 30 e 34,9 = Obesidade grau 1");
		printf("\nEntre 35 e 39,9 = Obesidade grau 2");
		printf("\nMais do que 40 = Obesidade grau 3");
		
		
		//validação menu
		while(menu!=1 && menu!=2){
			printf("\n|-------Menu---------|\nDeseja continuar? [1. sim] [2. nao]");scanf("%d",&menu);
		}
		
	}while(menu==0);
}
