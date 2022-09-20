//Desenvolva um programa que calcule desconto de INSS de um funcionário, se o salário for menor ou igual a do que R$ 1212,00 reais será de 7,5%, se estiver entre R$ 1212,01 e 2427,35 será
//de 9%, se estiver entre R$ 2427,36 e R$ 3641,03 o desconto é 12%, se estiver entre R$ 3641,04 a R$
//7087,22 será de 14% e se for maior do que 7087,22 o teto que é o máximo cobrado 14% de 7087,22.
//Mostre o desconto e o valor do salário final. 

#include <stdio.h>
#include <locale.h>
  
int main() {
	setlocale(LC_ALL,"");
	float salario,aumento;
	//Entrada
	printf("Digite o valor do seu salário\n");
	scanf("%f",&salario);
  aumento = salario;
	//Processamento e Saída
  if(salario >= 1500 && salario <=1750){
      aumento = ((aumento / 100) * 15);
      salario = salario + aumento;
    
  } else if(salario >= 1750 && salario <= 2000 ){
      aumento = ((aumento / 100) * 12);
      salario = salario + aumento;
      printf("seu aumento é: = %.2f \n",aumento);
  } 
  
  else if(salario >= 3000 && salario <= 2000 ){
      aumento = ((aumento / 100) * 9);
      salario = salario + aumento;
      printf("seu aumento é: = %.2f \n",aumento);
  } 
  
  else if(salario >=  3000){
      aumento = ((aumento / 100) * 6);
      salario = salario + aumento;
      printf("seu aumento é: = %.2f \n",aumento);
  } 
  
  else{
    printf("ok \n");
  }
	printf("Seu novo salario é: = %.2f ", salario);
    return 0;
}
  
