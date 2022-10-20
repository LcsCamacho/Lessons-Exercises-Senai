//5. Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c.
//O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes
//situações:
//• Se o usuário informar o valor de A igual a zero, a equação não é do segundo grau e o
//programa não deve fazer pedir os demais valores, sendo encerrado;//
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int menu;
	float a,b,c,x,raiz,delta;
	do{//entradas
		printf("Digite os valores a ser calculado a raíz:");
		scanf("%f",&a);
		
		printf("\n");
		scanf("%f",&b);
		
		printf("\n");
		scanf("%f",&c);
		//condicionais
		if(a==0.0){
			printf("A equação não é de segundo grau");
			menu=2;
		}
		//processamento 
		delta=(b*b)-4*a*c;
		if(delta<0)printf("a equaçao nao possui raizes reais");
		if(delta==0)printf("delta é igual a zero, a equação possui apenas uma raiz real");
		if(delta>0)printf("a equação possui apenas duas raizes reais");
		printf("\nDeseja continuar ? [1 sim] [2 nao] ");
		scanf("%d",&menu);	
		if(menu!=1){
			printf("Tchau!!");
		}
	}while(menu==1);
}
