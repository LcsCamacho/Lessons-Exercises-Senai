/* TODO (#1#): //Desenvolva um programa que leia o nome e 
               o sal�rio de 5 pessoas, depois leia um valor de 
               �ndice percentual (%) de reajuste do sal�rio. 
               Calcule e apresente na tela, o valor do novo 
               sal�rio e o nome das 5 pessoas.
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
		printf("%d - Digite seu nome e s�lario:\n",i);
		scanf("%s",&nome[i]);
		scanf("%f",&sal); 
	}
	
	
	//valida��o
	for(i=0;i<5;i++){
		if(sal[i]<0)printf("Digite um valor v�lido");
	}
	
	
	//processamento e saida
	reaj=sal*(percentual/100);
	salFinal=reaj+sal;
	for(i=0;i<5;i++){
		printf("%s o novo sal�rio � %.1f\n",nome[i],salFinal);
	}
}

