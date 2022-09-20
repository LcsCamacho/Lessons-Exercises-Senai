//Desenvolva um programa que leia o salário de um //funcionário e o número de filhos. Se o salário
//for menor do que 2000 o funcionário receberá um //salário família equivalente a 45 reais por filho.
//Apresente o salário final. 
#include <stdio.h>
#include <locale.h>
  
int main() {
	setlocale(LC_ALL,"");
	int salario, qtdFilhos;

	//Entrada
	printf("Digite o valor do seu salário\n");
	scanf("%d",&salario);
	printf("Quantos filhos você possui ?\n");
	scanf("%d",&qtdFilhos);
	//Processamento e Saída
  if(salario <=2000){
    salario = salario + (45 * qtdFilhos);
   
  }
	printf("Seu novo salario é : %d  %.2f", salario);
    return 0;
}
