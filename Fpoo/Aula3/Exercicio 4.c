//Desenvolva um programa que leia os valores de tr�s lados de um tri�ngulo (a, b e c) e se os tr�s
//lados forem diferentes escreva ESCALENO se os tr�s lados forem iguais EQUIL�TERO e se apenas dois lados forem iguais IS�SCELES. . 

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
 
	//Processamento e Sa�da
  if(lado1 != lado2 && lado1 != lado3 && lado2!=lado3 ){
		printf("Todos os lado sao diferentes, ESCALENO");
		
  } else if(lado1 == lado2 && lado1 == lado3 ){
		printf("Todos os lados iguais, EQUIL�TERO"); 
		
  } else {
		printf("Apenas dois lados iguais. IS�SCELES");
  }
    return 0;
}
  
