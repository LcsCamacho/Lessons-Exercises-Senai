/* - Escreva um programa que leia dois n�meros 
inteiros e determine qual � o maior e o menor.*/

#include<locale.h>
#include<stdio.h>

int main(){
	//V�riaveis e confs
	setlocale(LC_ALL,"");
	int n1,n2;
	//entrada
	printf("Digite um numero: ");
	scanf("%d",&n1);
	
	printf("Digite um numero: ");
	scanf("%d",&n2);
	
	if(n1>n2){
		printf("1� : %d",n1);
		printf("2� : %d",n2);
	} else if (n2>n1){
		printf("1� : %d",n2);
		printf("2� : %d",n1);
	}else{
		printf("ok");
	}
	return 0;
	//processamento e saida
}
