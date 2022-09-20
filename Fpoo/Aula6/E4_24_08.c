/* TODO (#1#): 4 - Localize um valor informado pelo usuário 
               dentro de um vetor com dimensão 10; */
  	
#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(){
	srand(time(NULL));
	setlocale(LC_ALL,"");
	int vetor[10];
	int i,numero,i2,igual,cont=0;
	
	do{
	//gera numeros e tira os iguais
		vetor[i]=1+rand () % 20;
				
		igual=0;
			
		for(i2=0;i2<i;i2++)if(vetor[i2]==vetor[i])igual=1;
	
		if(igual==0)i++;
			
	}while(i<10);
	
	printf("Digite um valor ");
	scanf("%d",&numero);
	
	for(i=0;i<10;i++){
		
		printf("vetor[%d] = %d\n",i+1,vetor[i]);
		
		if(numero==vetor[i]){
		
		printf("Na posição:%d os números sao iguais. Numero:%d \n",i+1,vetor[i]);
		
		cont++;	
		}
	}
	/*ALGORITMO COM WHILE
		int encontrado=0
		esse encontrado é encontrado diferente dele mesmo ou seja encontrado = 1
		while(!encontrado){
			if(vetor[i] == numero)encontrado=1;
			i++;
			
			if( i == 10 ) break;
			
		}
		
		if(encontrado) printf("encontrei");
		else printf("Não encontrei");
	*/
	if(cont==0)printf("\n\nNÃO ENCONTRADO");
		
}
