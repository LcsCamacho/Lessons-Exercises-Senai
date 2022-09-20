//– Desenvolva um programa que leia 6 números inteiros e exiba na tela ao final, o maior número
//que foi digitado pelo usuáriou. 

#include <stdio.h>
#include <locale.h>
  
int main() {
	setlocale(LC_ALL,"");
	int n1,n2,n3,n4,n5,n6,maior;
	int numero,i,guarda_menor,guarda_maior;

	/*	printf("\n Digite um numero inteiro: ");
		scanf("%d",&numero);*/
	
	//Entrada
	printf("Digite um numero inteiro ");
		scanf("%d",&n1);
 	printf("Digite um numero inteiro ");
		scanf("%d",&n2);
 	printf("Digite um numero inteiro ");
		scanf("%d",&n3);
 	printf("Digite um numero inteiro ");
		scanf("%d",&n4);
 	printf("Digite um numero inteiro ");
		scanf("%d",&n5);
 	printf("Digite um numero inteiro ");
		scanf("%d",&n6);
  
  /*	for(i=1; i<5; i++)
	{
		printf("\n Digite o %dº numero inteiro: ",i+1);
		scanf("%d", &numero);
		//armazena o maior dentre os digitados
		if(numero>guarda_maior)
		guarda_maior=numero;
		//armazena o menor dentre os digitados
		else if(numero<guarda_menor)
		guarda_menor=numero;
	} */
	//Processamento e Saída com IF
  //teste numero 1
  if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5 && n1 > n6){
    maior=n1;
  }// teste numero 2
  else if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5 && n2 > n6 ){
    maior=n2;
  }//teste numero 3
  else if(n3 > n2 && n3 > n2 && n3 > n4 && n3 > n5 && n3 > n6 ){
    maior=n3;
  }//teste numero 4
  else if(n4 > n1 && n4 > n3 && n4 > n2 && n4 > n5 && n4 > n6 ){
    maior=n4;
  }//teste numero 5
  else if(n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4 && n5 > n6 ){
    maior=n5;
  }//teste numero 6
  else if(n6 > n1 && n6 > n2 && n6 > n3 && n6 > n4 && n6 > n5 ){
    maior=n6;
  }else{
    printf("ok");
  }
    printf("o maior é : %d  1º%d  2º%d  3º%d  4º%d  5º%d 6º%d",maior,n1,n2,n3,n4,n5,n6);
    return 0;
}
