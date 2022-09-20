/* TODO (#1#): (10) Crie um programa que leia o nome e duas 
               notas de 5 alunos, em seguida mostre a lista 
               com nomes notas e médias dos 5 alunos. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL,"");
	char nome[5][10];
	int i,j;
	int notas[5][4];
	float media[5];
	
	
	//entrada
	for(i=0;i<5;i++){
		printf("%d - Digite o nome do aluno:\n",i+1);
		scanf("%s",&nome[i]);
	}
	
	
	//entrada notas
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			printf("%d - Digite a suas notas (0 a 10):\n",i+1);
			scanf("%d",&notas[i][j]);
			if(notas[i][j]<0)printf("Digite um valor válido");
		}
	}
	
	
	//processamento e saida
	for(i=0;i<5;i++){
		media[i]=(notas[i][0]+notas[i][1])/2;
		printf("\n%s suas notas são = %d %d\n e a média é =%.1f\n______________\n",nome[i],notas[i][0],notas[i][1],media[i]);	
	}
}
  
  
