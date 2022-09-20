//9 - Faça um programa onde o usuário digita 15 valores e imprima a soma destes valores na tela.

#include <stdio.h>
int main() {
  int i,valor;
  float soma;
  
	//entrada e processamento
  	for (i=1;i<=15;i++){
	    printf("%d Digite um valor: ",i);
	    scanf("%d",&valor);
	    soma=soma+valor;
  	}

  	printf("%.1f",soma);
}
  
