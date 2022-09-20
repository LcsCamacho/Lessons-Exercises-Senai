/* TODO (#1#): //(7) Gere e imprima uma matriz 3x3 com 
               valores aleatórios entre 0 e 9. Após, determine 
               o maior número da matriz e sua posição. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<time.h>
int main() {
	srand(time(NULL));
	setlocale(LC_ALL,"");
	int matriz[3][3],posi[3][3];
	int i,i2,maior=0;
	
	
  	//gera numeros aleatorios de 0 a 9
	for(i=0;i<3;i++){
		for(i2=0;i2<3;i2++){
		matriz[i][i2]=rand()%9;
		posi[i][i2]=matriz[i][i2];
		}
	}	
		
			
	printf("\n__________________________________________________\n");
	
	
	//demonstra a matriz
	for(i=0;i<3;i++){
		for(i2=0;i2<3;i2++){
			printf("matriz[%d][%d]=%d | ",i,i2,matriz[i][i2]);
			if(i2==2)printf("\n--------------------------------------------------\n");
			
			//guarda o maior
			if(maior<matriz[i][i2]){
				maior=matriz[i][i2];
			}
		}
	}
	
	
	//demonstra o maior
	printf("\no maior é=%d\n",maior);
	
	
	//demonstra a posicao
	printf("\n---posições---\n ");
	for(i=0;i<3;i++){
		for(i2=0;i2<3;i2++){
			if(posi[i][i2]==maior){
				printf("matriz [%d][%d] | ",i,i2);
				if(i2==2)printf("\n");
			}
		}
	}

}
