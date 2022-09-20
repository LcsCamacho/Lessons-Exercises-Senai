//Desenvolva um programa que leia os valores de três lados de um triângulo (a, b e c) e se os três
//lados forem diferentes escreva ESCALENO se os três lados forem iguais EQUILÁTERO e se apenas dois lados forem iguais ISÓSCELES. . 

#include <stdio.h>
#include <locale.h>
  
int main() {
	setlocale(LC_ALL,"");
	float lado1,lado2,lado3;
	//Entrada
	printf("Digite o lado 1 do triangulo ");
		scanf("%f",&lado1);
	printf("Digite o lado 2 do triangulo ");
		scanf("%f",&lado2);
	printf("Digite o lado 3 do triangulo ");
		scanf("%f",&lado3);
 
	//Processamento e Saída
  if(lado1 != lado2 && lado1 != lado3 && lado2!=lado3 ){
		printf("Todos os lado sao diferentes, ESCALENO");
		
  } else if(lado1 == lado2 && lado1 == lado3 ){
		printf("Todos os lados iguais, EQUILÁTERO"); 
		
  } else {
		printf("Apenas dois lados iguais. ISÓSCELES");
  }
    return 0;
}
  
