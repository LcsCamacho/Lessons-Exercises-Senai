//EAD 4. As Organiza��es Tabajara resolveram dar um aumento de sal�rio aos seus colaboradores e lhe 
//contrataram para desenvolver o programa que calcular� os reajustes. Fa�a um programa que recebe o 
//sal�rio de um colaborador e o reajuste segundo o seguinte crit�rio, baseado no sal�rio atual:
//o sal�rios at� R$ 280,00 (incluindo) : aumento de 20%
//o sal�rios entre R$ 280,00 e R$ 700,00 : aumento de 15%
//o sal�rios entre R$ 700,00 e R$ 1500,00 : aumento de 10%
//o sal�rios de R$ 1500,00 em diante : aumento de 5%
//� Ap�s o aumento ser realizado, informe na tela:
//o o sal�rio antes do reajuste;
//o o percentual de aumento aplicado;
//o o valor do aumento;
//o o novo sal�rio, ap�s o aumento



#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int menu;
	float salTotal = 1.0,reajuste = 1.0;
		do{
			printf("Digite o seu sal�rio ");
			scanf("%f",&salTotal);
			if(salTotal<=280){
				reajuste=salTotal*0.2;
				printf("Salario antes do reajuste:%.1f",salTotal);
				printf("\nPercentual de aumento:20%%");
				printf("\nValor do reajuste:%.1f",reajuste);
				printf("\nValor do salario apos reajuste:%.1f",salTotal+reajuste);
			}else if(salTotal>=280&&salTotal<=700){
				reajuste=salTotal*0.15;
				printf("Salario antes do reajuste:%.1f",salTotal);
				printf("\nPercentual de aumento:15%%");
				printf("\nValor do reajuste:%.1f",reajuste);
				printf("\nValor do salario apos reajuste:%.1f",salTotal+reajuste);
			}else if(salTotal>=700&&salTotal<=1500){
				reajuste=salTotal*0.1;
				printf("Salario antes do reajuste:%.1f",salTotal);
				printf("\nPercentual de aumento:10%%");
				printf("\nValor do reajuste:%.1f",reajuste);
				printf("\nValor do salario apos reajuste:%.1f",salTotal+reajuste);
			}else{
				reajuste=salTotal*0.05;
				printf("Salario antes do reajuste:%.1f",salTotal);
				printf("\nPercentual de aumento:20%%");
				printf("\nValor do reajuste:%.1f",reajuste);
				printf("\nValor do salario apos reajuste:%.1f",salTotal+reajuste);
			}

			printf("\nDeseja continuar ? [1 sim] [2 nao] ");
			scanf("%d",&menu);
			if(menu!=1){
				printf("Tchau!!");
			}		
		}while(menu==1);
}
