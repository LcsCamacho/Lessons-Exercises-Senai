/* TODO (#1#): (8) Gere e imprima uma matriz 5x5 com 
               valores aleatórios entre 0 e 25. Após isso 
               indique qual é o maior e o menor valor da 
               linha 4 e o maior e menor valor da coluna 3. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main() {
	srand(time(NULL));
	setlocale(LC_ALL,"");
	int matriz[5][5];
	int i,i2,maior=0,menor=32767;
	
	
  	//gera numeros aleatorios
	for(i=0;i<5;i++)	for(i2=0;i2<5;i2++)	matriz[i][i2]=rand()%25;
	
	
	//demonstra matriz
	for(i=0;i<5;i++){
		printf("\n");
		for(i2=0;i2<5;i2++){
			printf("   matriz[%d][%d]=%d",i,i2,matriz[i][i2]);
		}
	}
	
	
	
	//guarda o maior e o menor da linha 4
	for(i2=0;i2<5;i2++){
		if(maior<matriz[4][i2])maior=matriz[4][i2];
		if(menor>matriz[4][i2])menor=matriz[4][i2];

	}
	//saida linha 4
	printf("\n o maior é=%d e o menor é=%d da linha 4",maior,menor);
	maior=0,menor=32767;
	printf("\n______________\n");
	
	
	/*-----------------------*/
	
	
	//guarda o maior e o menor da coluna 3
	for(i2=0;i2<5;i2++){
		if(maior<matriz[i2][3])maior=matriz[i2][3];
		if(menor>matriz[i2][3])menor=matriz[i2][3];

	}
	//saida coluna 3
	printf("\n o maior é=%d e o menor é=%d da coluna 3",maior,menor);
  
}
