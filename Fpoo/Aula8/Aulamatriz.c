
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main() {
	srand(time(NULL));
	setlocale(LC_ALL,"");
   	int numero[9][9];
	int aux,menu,igual;
	//indices
   	int i=0,i2=0,i3=0,i4=00;
   	
	//armazena as variaveis
	do{
		do{//gera numeros
			numero[i][i2]=rand () % 150;
			igual=0;
			//percorre vetor da matriz
			for(i4=0;i4<10;i4++){
				if(numero[i][i4]==numero[i][i4]){
					igual=1;
				}
				i3++;
			}
			
			//condicionais
			i2=0;
			if(igual==0)
				i2++;
			if(i2==9){
				i2=0;
				i++;
			} 
		}while(i<10);
		
		//ordena os numeros	


		for(i2=0;i2<9;i2++){
			for(i=0; i<9; i++){
				if(numero[i][i2]>numero[i+1][i2+1]){
					aux=numero[i][i2];
					numero[i][i2]=numero[i+1][i2=1];
					numero[i+1][i2+1]=aux;
				}
			}
		}


		//apagar cmd
		system("cls");
		
		//saida
		for(i=0;i<=9;i++)
		for(i2=0;i2<=9;i2++)
		printf("\nNumero:%d\n",numero[i][i2]);
		
		//menu
		printf("continuar ordenando? 1-sim 2-nao\n");
		scanf("%d",&menu);
	}while(menu==1);
}
  
