//EAD 1- Toda vez que ele traz um peso de peixes maior que o estabelecido pelo
//regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo
//excedente. João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule
//o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor
//da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.

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
			printf("O peso ultrapassou o limite do regulamento de pesca do estado de São Paulo. \n Você deve pagar uma multa de 4 reais por peso excedido.");
			multa=(peso-50)*4;
			printf("\nSua multa é de R$%d",multa);
		}
		printf("\nDeseja continuar pesando ? [1 sim] [2 nao] ");
		scanf("%d",&menu);	
	}while(menu==1);
	
}
