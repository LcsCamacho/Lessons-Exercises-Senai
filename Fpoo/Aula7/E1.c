/* TODO (#1#): Faça um programa que leia 10 valores inteiros 
               em qualquer ordem e os classifique em ordem 
               crescente. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main() {
	srand(time(NULL));
	setlocale(LC_ALL,"");
   	int numero[9],i,aux,menu,i2,igual;
   	
	
	do{
		
		//gera numeros
		do{
			numero[i]=rand () % 60;
			igual=0;	
			for(i2=0;i2<i;i2++)if(numero[i2]==numero[i])igual=1;
			if(igual==0)i++;
		}while(i<10);
		
		
		//ordena os numeros	
		for(i2=0;i2<9;i2++){
			for(i=0; i<9; i++){
				if(numero[i]>numero[i+1]){
					aux=numero[i];
					numero[i]=numero[i+1];
					numero[i+1]=aux;
				}
			}
		}
		
		
		//saida
		for(i=0;i<=9;i++){
			printf("\nNumero ordenado:%d\n",numero[i]);
		}
		printf("continuar ordenando? 1-sim 2-nao\n");
		scanf("%d",&menu);
		
		
	}while(menu==1);
}
  
