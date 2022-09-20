/* TODO (#1#):Faça um programa que leia 5 nomes inteiros aleatorios e os 
			  classifique em ordem decrescente. */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
int main() {
	setlocale(LC_ALL,"");
   	char nome[5][15],aux[15];
   	int menu,i,i2;

	do{
		printf("Digite cinco nomes:\n");
		for(i=0;i<5;i++)scanf("%s",&nome[i]);
		for(i=0; i<5; i++){
			for(i2=0; i2<5; i2++){
				if(strcmp(nome[i], nome[i2]) > 0){
					strcpy(aux, nome[i]);
					strcpy(nome[i], nome[i2]);
					strcpy(nome[i2], aux);
				}
			}
		}
		for(i=0; i<5; i++)printf("Nome:%s\n",nome[i]);
		printf("\n__________________\nDeseja continuar ?\n1 sim 2 nao.");
		scanf("%d",&menu);
	}while(menu==1);
}
  
