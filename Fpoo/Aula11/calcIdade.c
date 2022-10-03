/* TODO (#1#): Para participar dos campeonatos os 
               competidores preenchem um formulário com 
               sua data de nascimento, crie uma função que 
               receba o ano de nascimento e retorne a idade 
               do competidor. */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<string.h>
//variaveis
int dia,mes,ano,meses,dias,mesAtual=9,diaAtual,x,y;
char nomes[10][10];
//funcao
void calcIdade(){
	setlocale(LC_ALL,"");
	printf("Dia : ");
	scanf("%d",&dia);
	printf("Mês : ");
	scanf("%d",&mes);
	printf("Ano : ");
	scanf("%d",&ano);
	ano = 2022-ano;
	x = 12-mesAtual;
	if(mes>mesAtual){
		ano-=1;
	}
	meses=(12*ano)+x;
	y=diaAtual-dia;
	dias=(30*meses)+y;
	printf("dias%d\nmeses%d\nanos:%d",dias,meses,ano);
}
int main(){
	calcIdade();
}
