
//EAD 2. Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s.
//Calcule e mostre o total do seu sal�rio no referido m�s, sabendo-se que s�o descontados 11% para o
//Imposto de Renda, 8% para o INSS e 5% para o sindicato, fa�a um programa que nos d�:
//a. sal�rio bruto.
//b. quanto pagou de IR.
//c. quanto pagou ao INSS.
//d. quanto pagou ao sindicato.
//e. o sal�rio l�quido
//f. calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int mes,menu;
	float ganhaHora = 0.0,salTotal = 0.0,numHora = 0.0,impRenda,inss,sind;
		do{
			printf("Digite o numero do m�s referente ao c�lculo ");
				scanf("%d",&mes);
			printf("Digite o numero de horas trabalhadas ");
				scanf("%f",&numHora);
			printf("Digite o quanto voce ganhou por hora ");
				scanf("%f",&ganhaHora);
				
			salTotal= ganhaHora*numHora;
			impRenda=salTotal*(11.0/100);
			inss=salTotal*(8.0/100);
			sind=salTotal*(5.0/100);
			
			
			
			printf("+Sal�rio Bruto:%.1f",salTotal);
			printf("\n -Imposto de Renda (11%%):R$%.1f",impRenda);
			printf("\n -INSS(8%%):R$%.1f",inss);
			printf("\n -Sindicato(5%%):R$%.1f",sind);
			printf("\n\n =Sal�rio L�quido:R$%.1f",salTotal-inss-impRenda-sind);
			
			
			printf("\nDeseja continuar ? [1 sim] [2 nao] ");
			scanf("%d",&menu);		
		}while(menu==1);
}
