/* TODO (#1#): Crie um programa que receba como entrada a 
               idade, o sexo 'M' ou 'F' e o n�mero de dias 
               desde a �ltima doa��o de sangue e responda 
               se o doador est� apto ou inapto a doar sangue 
               novamente.
               Lembrando que o tempo m�nimo entre as 
               doa��es para homens � de 60 dias e mulheres 
               90 dias. */
               
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int doarMasc(int tempo){
	if(tempo>60)return printf("APTO");
	else return printf("INAPTO");
}
int doarFem(int tempo){
	if(tempo>90)return printf("APTO");
	else return printf("INAPTO");
}
int main(){
	setlocale(LC_ALL,"");
	int tempo,idade;
	char sexo[1],nome[10];
	printf("digite seu nome: ");
	scanf("%s",&nome);
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	printf("Digite seu sexo:\nF-Feminino\nM-Masculino\n");
	scanf("%s",&sexo);
	printf("Digite quantos dias fazem desde a ultima doa��o: ");
	scanf("%d",&tempo);
	if(idade>=16 && idade<=69){
		if(strcmp(sexo,"m") == 0 ||strcmp(sexo,"M") == 0 ){
			doarMasc(tempo);
		}else if(strcmp(sexo,"f") == 0 ||strcmp(sexo,"F") == 0 ){
			doarFem(tempo);
		}else {
			printf("Digite corretamente os dados");
		}
	}
	else printf("apenas maiores de 16 anos podem doar");
}
