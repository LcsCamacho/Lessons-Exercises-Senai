//8 - Fa�a um programa que imprima na tela a soma dos valores pares de um intervalo definido pelo
//usu�rio. 

#include <stdio.h>
int main() {
  int i,intervalo;
  
	//entrada
	printf("Digite um valor: ");
	scanf("%d",&intervalo);
	
	//processamento e saida 
	for(i=0;i<=intervalo;i+=2 ){
	printf(" %d ",i);
	}
}
  
