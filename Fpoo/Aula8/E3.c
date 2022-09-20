/* TODO (#1#): //(3) Desenvolva um programa que leia o 
               nome e o preço de 5 mercadorias. Se o preço 
               for menor do que 1000 terá um aumento de 
               5% no preço da mercadoria, senão o aumento 
               será de 7%. Mostrar o nome das mercadorias e 
               o seu novo preço.
                */

#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	char nome[5][10];
	int i;
	float preco[5];
	
	
	//entrada e validação
	for(i=0;i<5;i++){
		printf("%d - Digite o nome da mercadoria e o preço:\n",i);
		scanf("%s",&nome[i]);
		scanf("%f",&preco[i]);
	if(preco[i]<0)printf("Digite um valor válido");
	
	
	//processamento
	if(preco[i]<1000)preco[i]=preco[i]+(preco[i]*0.05);
	else preco[i]=preco[i]+(preco[i]*0.07);
	}
	
	
	//saida
	for(i=0;i<5;i++){
		printf("o produto %s esta custando %.1f apos o reajuste\n",nome[i],preco[i]);
	}
}
  
