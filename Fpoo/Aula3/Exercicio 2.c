//Desenvolva um programa que leia o sal�rio de um //funcion�rio e o n�mero de filhos. Se o sal�rio
//for menor do que 2000 o funcion�rio receber� um //sal�rio fam�lia equivalente a 45 reais por filho.
//Apresente o sal�rio final. 
#include <stdio.h>
#include <locale.h>
  
int main() {
	setlocale(LC_ALL,"");
	int salario, qtdFilhos;

	//Entrada
	printf("Digite o valor do seu sal�rio\n");
	scanf("%d",&salario);
	printf("Quantos filhos voc� possui ?\n");
	scanf("%d",&qtdFilhos);
	//Processamento e Sa�da
  if(salario <=2000){
    salario = salario + (45 * qtdFilhos);
   
  }
	printf("Seu novo salario � : %d  %.2f", salario);
    return 0;
}
