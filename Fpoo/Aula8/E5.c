/* TODO (#1#): //(5) Desenvolva um programa que leia o 
               nome e o preço de 10 mercadorias, depois leia 
               o valor do índice percentual (%) de desconto 
               no preço da mercadoria. Calcule e apresente 
               na tela, o nome, o preço original, o valor do 
               desconto e preço final de cada mercadoria 
               com desconto. */

#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	char nome[10][10];
	int i;
	float preco[10];
	
	
	//entrada
	for(i=0;i<5;i++){
		printf("%d - Digite o nome da mercadoria e o preço:\n",i+1);
		scanf("%s",&nome[i]);
		scanf("%f",&preco[i]);
		if(preco[i]<0)printf("Digite um valor válido");
	}
	
	
	//processamento e saida
	for(i=0;i<5;i++){
		printf("o produto %s esta custando R$%.2f apos o reajuste de R$%.2f(10%%)\n",nome[i],(preco[i]+(preco[i]*0.10)), (preco[i]*0.10));
	}
}
  
  
