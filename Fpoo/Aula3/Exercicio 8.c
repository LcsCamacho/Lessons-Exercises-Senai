/* - Escreva um programa que leia dois números 
inteiros e determine qual é o maior e o menor.*/

#include<locale.h>
#include<stdio.h>

int main(){
	//Váriaveis e confs
	setlocale(LC_ALL,"");
	int n1,n2;
	//entrada
	printf("Digite um numero: ");
	scanf("%d",&n1);
	
	printf("Digite um numero: ");
	scanf("%d",&n2);
	
	if(n1>n2){
		printf("1º : %d",n1);
		printf("2º : %d",n2);
	} else if (n2>n1){
		printf("1º : %d",n2);
		printf("2º : %d",n1);
	}else{
		printf("ok");
	}
	return 0;
	//processamento e saida
}
