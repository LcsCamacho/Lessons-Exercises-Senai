//Desenvolva um programa que calcule desconto de INSS de um funcionário, se o salário for menor ou igual a do que R$ 1212,00 reais será de 7,5%, se estiver entre R$ 1212,01 e 2427,35 será
//de 9%, se estiver entre R$ 2427,36 e R$ 3641,03 o desconto é 12%, se estiver entre R$ 3641,04 a R$
//7087,22 será de 14% e se for maior do que 7087,22 o teto que é o máximo cobrado 14% de 7087,22.
//Mostre o desconto e o valor do salário final. 

#include <stdio.h>
#include <locale.h>
  
int main() {
	setlocale(LC_ALL,"");
	float salario,desconto,x;
	//Entrada
	printf("Digite o valor do seu salário\n");
	scanf("%f",&salario);
  	desconto = salario;
	//Processamento e Saída
  if(salario <= 1212.00){
      desconto = ((desconto / 100) * 7.5);  
  } 
  
  else if(salario >= 1212.01 && salario <= 3641.03 ){
      desconto = ((desconto / 100) * 12);
      printf("seu desconto é: = %.2f \n",desconto);
  } 
  
  else if(salario >= 3641.04 && salario <= 7087.22 ){
      desconto = ((desconto / 100) * 14);
      printf("seu desconto é: = %.2f \n",desconto);
  } 
  
  else if(salario >=  7087.22){
      desconto = (7087.22 / 100) * 14;
      printf("seu desconto é: %.2f \n",desconto);
  } 
  
  else{
    printf("ok \n");
  }

	printf("Seu novo salario é: = %.2f ", salario-desconto);
    return 0;
}
  
