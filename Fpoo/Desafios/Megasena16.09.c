#include<stdio.h>
#include<locale.h>
#include<time.h>
int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int sorteados[6];
	int i, j,arm;
	//Processamento (Preencher os numeros sorteados)
	for(i = 0; i <=6; i++)	sorteados[i]	= rand()%60+1;
	
	
	//Saída matriz completa
	int alinha = 10;
	for(i = 1; i <= 60; i++){
		if(i<10)printf("[0%d]",i);
		else printf("[%d]",i);
		if(i==alinha){
			printf("\n");
			alinha+=10;
		}
	}
	printf("\nMatriz completa\n\n\n");
	
	//saida sem os numeros sorteados
	alinha=10;
	for(i = 1; i <= 60; i++){
		for(j=0;j<6;j++){
			if(i==sorteados[j]){
				printf("[  ]");
				arm=i;
			}
		}
		if(arm!=i && i<10)printf("[0%d]",i);
		else if (arm!=i && i<100) printf("[%d]",i);
		if(i==alinha){
			printf("\n");
			alinha+=10;	
		}	
			
	}
			
}
