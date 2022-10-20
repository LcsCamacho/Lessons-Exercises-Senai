#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	setlocale(LC_ALL,"");
	int soma,i,i2,cont;
	int matriz[4][4];
	srand(time(NULL));
	
	for(i=0;i<4;i++){
		for(i2=0;i2<4;i2++)matriz[i][i2]=rand() % 20;
	}
	for(i=0;i<4;i++){
		printf("|Linha %d Coluna 1 = %d",i+1,matriz[i][0]);
		soma = 0;
	
		for(i2=1;i2<4;i2++){
			printf("|Linha %d Coluna %d  = %d",i+1,i2+1,matriz[i][i2]);
			soma= soma+matriz[i][i2];
			
			if(i2==3 ){
				printf("   Soma: %d\n",soma+matriz[i][0]);
			}
		}
	}
	for(i=0;i<4;i++){
		if(matriz[i][0]==0){
			cont++;
			printf("Linha %d coluna 1 tem 0",i+1,i2+1);
		}
			
		for(i2=1;i2<4;i2++){
			if(matriz[i][i2]==0){
				cont++;
				printf("\nlinha %d e coluna %d tem 0",i+1,i2+1);
			}
			
		}
		
	}
	printf("\ncont %d",cont);
	
}
