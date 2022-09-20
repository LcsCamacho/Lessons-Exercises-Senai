//(2) Desenvolva um programa que leia o nome de 5 times de futebol, 
//o número de vitórias e o número de empates de cada time. 
//O programa deverá calcular e apresentar na tela, o nome dos times 
//e o total de notas de cada um e a ordem de classificação crescente. 
//Lembrando que a vitória vale 3 notas e o empate vale 1 ponto.
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");	
	char nome[5][10],aux2[15];
	int i,i2,vit,emp,aux;
	int notas[5];
	
	
	//entrada e processamento
	for(i=0;i<5;i++){
		printf("%d - Digite o nome do time, a quantidade de vitórias e de empates:\n",i);
		scanf("%s",&nome[i]);
		scanf("%d",&vit);
		scanf("%d",&emp); 
		notas[i]=(vit*3)+emp;
	}
	
	
	//processamento
	for(i2=0;i2<=4;i2++){
		for(i=0;i<=4;i++){
			if(notas[i2]>notas[i]){
			
			aux=notas[i2];
			notas[i2]=notas[i];
			notas[i]=aux;
			
			strcpy(aux2,nome[i2]);
			strcpy(nome[i2],nome[i]);
			strcpy(nome[i],aux2);
		  
			}
		}
	}
	
	
	//saida
	for(i=0;i<5;i++){
		printf("o Time %s esta em %dº lugar com %d\n",nome[i],i+1,notas[i]);
	}
}
  
