/* TODO (#1#): Para participar dos campeonatos os 
               competidores preenchem um formul�rio com 
               sua data de nascimento, crie uma fun��o que 
               receba o ano de nascimento e retorne a idade 
               do competidor. */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<string.h>
//variaveis
int dia,mes,ano;
char nomes[10][10];
//funcao
void calcIdade(){
	printf("Dia : ");
	scanf("%d",&dia);
	printf("M�s : ");
	scanf("%d",&mes);
	printf("Ano : ");
	scanf("%d",&ano);
	printf("Voce esta vivendo h�:\n");
	printf("dias:%d\nmeses:%d\nanos:%d",30-dia,12-mes,2022-ano);
	return 2022-ano;
}
int main(){
	calcIdade();
}
