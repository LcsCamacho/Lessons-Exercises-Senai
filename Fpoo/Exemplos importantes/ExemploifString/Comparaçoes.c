#include <locale.h>
#include <stdio.h>
#include <string.h>
int main(){
	//Vari�veis e Configura��es
	setlocale(LC_ALL,"");
	int cor[10];
	//Entradas
	printf("--------------------------------\n");
	a("Digite a cor do sem�foro:\n");	
	scanf("%s",&cor[0]);	
	//Processamento
	if(strcmp(cor[0], "verde")==0)printf("Pode ir");

	//Sa�das
}
