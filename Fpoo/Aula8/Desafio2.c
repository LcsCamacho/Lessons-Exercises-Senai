//desafio acerola
//Cada acelora faz 50ml de suco
//dividir igualmente em amigos
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");

	int i,aux,i2,cont;
	int pessoas;
	float litros,acerolas;
	
	//menu
	do{
		//entrada
		printf("- Digite a quantidade de amigos:");
		scanf("%d",&pessoas);
		
		
		//entrada acelora e processamento dos litros
		printf("- Digite a quantidade de acerola:");
		scanf("%f",&acerolas);
		litros=(acerolas/100)*5;
		if(acerolas==0&&pessoas==0)break;
		
		
		
		//processamento e saida
		printf("%.2f\n",litros/pessoas);
		
	}while(pessoas>1 && acerolas>1);
}
  
  
