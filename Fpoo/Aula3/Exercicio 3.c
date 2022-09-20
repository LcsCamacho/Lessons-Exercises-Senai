//Desenvolva um programa que calcule desconto de INSS de um funcion�rio, se o sal�rio for menor ou igual a do que R$ 1212,00 reais ser� de 7,5%, se estiver entre R$ 1212,01 e 2427,35 ser�
//de 9%, se estiver entre R$ 2427,36 e R$ 3641,03 o desconto � 12%, se estiver entre R$ 3641,04 a R$
//7087,22 ser� de 14% e se for maior do que 7087,22 o teto que � o m�ximo cobrado 14% de 7087,22.
//Mostre o desconto e o valor do sal�rio final. 

#include <stdio.h>
#include <locale.h>
  
int main() {
	setlocale(LC_ALL,"");
	float salario,desconto,x;
	//Entrada
	printf("Digite o valor do seu sal�rio\n");
	scanf("%f",&salario);
  	desconto = salario;
	//Processamento e Sa�da
  if(salario <= 1212.00){
      desconto = ((desconto / 100) * 7.5);  
  } 
  
  else if(salario >= 1212.01 && salario <= 3641.03 ){
      desconto = ((desconto / 100) * 12);
      printf("seu desconto �: = %.2f \n",desconto);
  } 
  
  else if(salario >= 3641.04 && salario <= 7087.22 ){
      desconto = ((desconto / 100) * 14);
      printf("seu desconto �: = %.2f \n",desconto);
  } 
  
  else if(salario >=  7087.22){
      desconto = (7087.22 / 100) * 14;
      printf("seu desconto �: %.2f \n",desconto);
  } 
  
  else{
    printf("ok \n");
  }

	printf("Seu novo salario �: = %.2f ", salario-desconto);
    return 0;
}
  
