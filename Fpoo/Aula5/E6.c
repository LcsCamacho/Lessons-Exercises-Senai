//6 - Faça um programa que imprima na tela a soma dos valores entre 0 e 100. 

#include<locale.h>
#include<stdio.h>
int main(){
	setlocale(LC_ALL,"");
	//variaveis
	int i,soma;
	
		//processamento 
		for(i=2;i<100;i++){
			soma+=i;
		}
		//saida
		printf("a soma de 0 a 100 é: %d",soma);

}



