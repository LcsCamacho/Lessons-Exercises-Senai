/* TODO (#1#): Faça um programa que gere 100 valores inteiros 
               aleatorios e os classifique em ordem crescente. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main() {
	srand(time(NULL));
	setlocale(LC_ALL,"");
   	int numero[100];
   	int i,i2,menu,aux;
   	
	//armazena as variaveis
	do{
		for(i=0; i<=99; i++)numero[i]=rand() % 200;	
	//ordena os numeros	o primeiro for crava um numero.Por exemplo tem 100 numeros. ele crava o numero 1.
		for(i=0; i<=99; i++){
			for(i2=0; i2<=99; i2++){//o segundo for ele pega o numero cravado e testa com todos os numeros.exemplo pega o 1 e testa com todos até o 99
				if(numero[i]<numero[i2]){
					aux=numero[i];
					numero[i]=numero[i2];
					numero[i2]=aux;
				}
			}
		}
		system("cls");
		for(i=0;i<=99;i++)printf("\n%dºNumero ordenado:%d\n",i+1,numero[i]);
		printf("Deseja continuar gerando numeros aleatorios e ordenando?\n1 sim 2 nao.");
		scanf("%d",&menu);
	}while(menu==1);
}
  
