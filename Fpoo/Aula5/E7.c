//7 - Faça um programa que imprima na tela a soma dos valores de um intervalo definido pelo usuário

#include <stdio.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"");
  int i,intervalo1,intervalo2;
  float soma;
  
  //entrada
	printf("Digite um valor: ");
	scanf("%d",&intervalo1);
	printf("Digite um valor: ");
	scanf("%d",&intervalo2);
    
  //processamento e saida
  	for(i=intervalo1;i<=intervalo2;i++ ){
    	soma=soma+i;
 	 }
  	printf("A soma dos valores é: %.1f",soma);
}
  
