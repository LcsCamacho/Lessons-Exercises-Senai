//� Desenvolva um programa que leia 6 n�meros inteiros e exiba na tela ao final, o maior n�mero
//que foi digitado pelo usu�riou. 

#include <stdio.h>
#include <locale.h>
  
int main() {
	setlocale(LC_ALL,"");
	int i,numero,guarda_maior,guarda_menor;
	//Entrada
	
	printf("Digite um numero inteiro ");
	scanf("%d",&numero);
	guarda_menor=numero;
	guarda_maior=numero;	

	for(i=1; i<5; i++)
	{
		printf("\n Digite o %d� numero inteiro: ",i);
		scanf("%d", &numero);
		//armazena o maior dentre os digitados
		if(numero>guarda_maior)
		guarda_maior=numero;
		//armazena o menor dentre os digitados
		else if(numero<guarda_menor)
		guarda_menor=numero;
	} 
	//saida
	printf("\n O maior � %d e o menor � %d",guarda_maior,guarda_menor);
	return 0;
}
  
