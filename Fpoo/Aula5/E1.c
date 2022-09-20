//1- Faça um programa que imprima na tela os valores no intervalo entre 10 e 200. 

#include<stdio.h>
int main(){
	int i,tabulacao=20;
	
	//processamento e saida
	for(i=11;i<200;i++){
		if(i<100) printf("0");
		printf("%d",i);
		if(tabulacao==i){
			printf("\n");
			tabulacao+=10;
		}else{
			printf("\t");
		}
	}
	
}
