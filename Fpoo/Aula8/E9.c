/* TODO (#1#): (9) Preencha uma matriz 5x5 com valores 
               aleat�rios entre 0 e 50. Depois exiba os 
               numeros pares e impares existentes na matriz, 
               e suas quantidades. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main() {
	srand(time(NULL));
	setlocale(LC_ALL,"");
	int matriz[5][5];
	int i,i2,contPar,contImpar;
	
	//AVISO Muitos FORES//
	
	//gera os valores
	for(i=0;i<5;i++)	for(i2=0;i2<5;i2++)	matriz[i][i2]=rand()%50;
	
	
	//demonstra a matriz
	for(i=0;i<5;i++){
		for(i2=0;i2<5;i2++){
			if(matriz[i][i2]<10)printf("  [%d][%d]=0%d",i,i2,matriz[i][i2]);
			else printf("  [%d][%d]=%d",i,i2,matriz[i][i2]);
			if(i2==4)printf("\n");	
		}
	}
	
	
	//Faz a contagem dos pares e impares e demonstra
	for(i=0;i<5;i++){
		for(i2=0;i2<5;i2++){
			if(matriz[i][i2]%2==0){
				contPar++;
				printf("\nN�mero Par    Posi��o: Matriz[%d][%d]=%d",i,i2,matriz[i][i2]);
			}else{
				contImpar++;
				printf("\nN�mero Impar  Posi��o: Matriz[%d][%d]=%d",i,i2,matriz[i][i2]);
			}
		}
	}
	
	
	//saida organizada da quantidade de pares e impares
	printf("\n____________________\nQuantidade de n�meros pares:%d\nQuantidade de n�meros Impares:%d",contPar,contImpar);
}
