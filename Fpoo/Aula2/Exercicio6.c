#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Desenvolva um programa que leia um n�mero �n� inteiro, 
//positivo e diferente de zero e apresente na tela: n � 1, e tamb�m n + 1.
 
int main(){
	
	int a,b,c;

    setlocale(LC_ALL,"");
    
	printf("Desenvolva um programa que leia um n�mero �n� inteiro,");
	printf("\n");
	printf("positivo e diferente de zero e apresente na tela: n � 1, e tamb�m n + 1. ");
	printf("\n");
	printf("Digite um numero inteiro maior que zero ");
		scanf("%d", &a);
		
	b = a-1;
	c = a+1;
	printf("%d",b);
	printf("\n");
	printf("%d",c);
			
}
