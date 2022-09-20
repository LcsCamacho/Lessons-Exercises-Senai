//– Desenvolva um programa que leia o nome e o preço de uma mercadoria. Se o preço for menor
//do que 1000 terá um aumento de 5% no preço da mercadoria, senão o aumento será de 7%. 
//Mostrar o nome da mercadoria e o seu novo preço.

#include <stdio.h>
#include <locale.h>
  
int main() {
	setlocale(LC_ALL,"");
	float preco,ajuste;
	char nome[10];
	//Entrada
	printf("______________________________________ \n");
	printf("     Digite o nome da mercadoria ");
		scanf("%s",&nome);
	printf("     Digite o preco da mercadoria ");
		scanf("%f",&preco);

	//Processamento e Saída
  if(preco < 1000){
    ajuste = (preco/100)*5;
    preco = preco + ajuste;
    printf("     Aumento de %.2f no preco do %s \n ",ajuste,nome);
    
  } else{
    ajuste = (preco/100)*7;
    preco = preco + ajuste;
    printf("     Aumento de %.2f no preco do %s \n ",ajuste,nome);
  }
    printf("    O novo preço é %.2f do produto : %s \n",preco,nome);
    return 0;
}
  
