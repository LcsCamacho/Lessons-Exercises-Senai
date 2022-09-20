/* TODO (#1#): //Desenvolva um programa que leia o nome e 
               o salário de 5 pessoas, depois leia um valor de 
               índice percentual (%) de reajuste do salário. 
               Calcule e apresente na tela, o valor do novo 
               salário e o nome das 5 pessoas.
                */

#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	char nome[5][10];
	float sal,reaj,salFinal,percentual=13;
	int i;
	
	
	//entrada
	for(i=0;i<5;i++){
		printf("%d - Digite seu nome e sálario:\n",i);
		scanf("%s",&nome[i]);
		scanf("%f",&sal); 
	}
	
	
	//validação
	for(i=0;i<5;i++){
		if(sal[i]<0)printf("Digite um valor válido");
	}
	
	
	//processamento e saida
	reaj=sal*(percentual/100);
	salFinal=reaj+sal;
	for(i=0;i<5;i++){
		printf("%s o novo salário é %.1f\n",nome[i],salFinal);
	}
}

