#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int empate,vitoria,pv,p;
    //entrada
	printf("--------------------------");
	printf("\n");
	printf("Digite a quantidade de vitoria do seu time: ");
		scanf("%d", &vitoria);		
	printf("Digite a quantidade de empate do seu time: ");
		scanf("%d", &empate);
	
		
	//processamento
	pv = vitoria * 3;
    p = pv+empate;
	
	
	
	//saida	
	printf("A quantidade de pontos do seu time e %d",p);
			
}
