//EAD 4. As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe 
//contrataram para desenvolver o programa que calculará os reajustes. Faça um programa que recebe o 
//salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
//o salários até R$ 280,00 (incluindo) : aumento de 20%
//o salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
//o salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
//o salários de R$ 1500,00 em diante : aumento de 5%
//• Após o aumento ser realizado, informe na tela:
//o o salário antes do reajuste;
//o o percentual de aumento aplicado;
//o o valor do aumento;
//o o novo salário, após o aumento



#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int menu;
	float salTotal = 1.0,reajuste = 1.0;
		do{
			printf("Digite o seu salário ");
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
