//5. Fa�a um programa que calcule as ra�zes de uma equa��o do segundo grau, na forma ax2 + bx + c.
//O programa dever� pedir os valores de a, b e c e fazer as consist�ncias, informando ao usu�rio nas seguintes
//situa��es:
//� Se o usu�rio informar o valor de A igual a zero, a equa��o n�o � do segundo grau e o
//programa n�o deve fazer pedir os demais valores, sendo encerrado;//
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int menu;
	float a,b,c,x,raiz,delta;
	do{//entradas
		printf("Digite os valores a ser calculado a ra�z:");
		scanf("%f",&a);
		
		printf("\n");
		scanf("%f",&b);
		
		printf("\n");
		scanf("%f",&c);
		//condicionais
		if(a==0.0){
			printf("A equa��o n�o � de segundo grau");
			menu=2;
		}
		//processamento 
		delta=(b*b)-4*a*c;
		if(delta<0)printf("a equa�ao nao possui raizes reais");
		if(delta==0)printf("delta � igual a zero, a equa��o possui apenas uma raiz real");
		if(delta>0)printf("a equa��o possui apenas duas raizes reais");
		printf("\nDeseja continuar ? [1 sim] [2 nao] ");
		scanf("%d",&menu);	
		if(menu!=1){
			printf("Tchau!!");
		}
	}while(menu==1);
}
