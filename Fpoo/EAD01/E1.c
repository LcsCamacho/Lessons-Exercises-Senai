//EAD 1- Toda vez que ele traz um peso de peixes maior que o estabelecido pelo
//regulamento de pesca do estado de S�o Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo
//excedente. Jo�o precisa que voc� fa�a um programa que leia a vari�vel peso (peso de peixes) e calcule
//o excesso. Gravar na vari�vel excesso a quantidade de quilos al�m do limite e na vari�vel multa o valor
//da multa que Jo�o dever� pagar. Imprima os dados do programa com as mensagens adequadas.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int i,menu,multa;
	float peso;
	
	
	do
	{
		do	
		{
			printf("Digite o peso dos peixes pescados: ");
			scanf("%f",&peso);
		}while(peso<=50);
		if(peso>=50){
			printf("O peso ultrapassou o limite do regulamento de pesca do estado de S�o Paulo. \n Voc� deve pagar uma multa de 4 reais por peso excedido.");
			multa=(peso-50)*4;
			printf("\nSua multa � de R$%d",multa);
		}
		printf("\nDeseja continuar pesando ? [1 sim] [2 nao] ");
		scanf("%d",&menu);	
	}while(menu==1);
	
}
