/* TODO (#1#): //(4) Desenvolva um programa que leia o 
               nome de uma cidade, o número total de 
               eleitores e o número total de votos apurados 
               na última eleição. O programa deverá calcular 
               e exibir a porcentagem de participação dos 
               eleitores desta cidade na última eleição e fazer 
               isso para 5 cidades. */

#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	char nome[5][10];
	int i;
	float eleit[5],votos[5];
	
	
	//entrada
	for(i=0;i<5;i++){
		printf("%d - Digite o nome da cidade o total de eleitores e o total de votos:\n",i+1);
		scanf("%s",&nome[i]);
		scanf("%f",&eleit[i]);
		scanf("%f",&votos[i]);
	}
	
	
	//validação
	for(i=0;i<5;i++){
		if(eleit[i]<0)printf("Digite um valor válido");
		if(votos[i]<0)printf("Digite um valor válido");
	}
	
	
	//processamento e saída
	for(i=0;i<5;i++){
		printf("A cidade %s teve uma participação de:%.2f(%%) dos eleitores\n",nome[i],(votos[i]/eleit[i])*100);
	}
}
  
