/* TODO (#1#): //(4) Desenvolva um programa que leia o 
               nome de uma cidade, o n�mero total de 
               eleitores e o n�mero total de votos apurados 
               na �ltima elei��o. O programa dever� calcular 
               e exibir a porcentagem de participa��o dos 
               eleitores desta cidade na �ltima elei��o e fazer 
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
	
	
	//valida��o
	for(i=0;i<5;i++){
		if(eleit[i]<0)printf("Digite um valor v�lido");
		if(votos[i]<0)printf("Digite um valor v�lido");
	}
	
	
	//processamento e sa�da
	for(i=0;i<5;i++){
		printf("A cidade %s teve uma participa��o de:%.2f(%%) dos eleitores\n",nome[i],(votos[i]/eleit[i])*100);
	}
}
  
