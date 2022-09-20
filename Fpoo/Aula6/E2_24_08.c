/* TODO (#1#): 2 - Crie um vetor de tamanho 10, permita que 
               o usuário o preencha e informe :
               	- A soma e média dos pares;
               	- A soma e média dos impares;
               	- O total de números pares;
               	- O total de números impares; */
               	
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	setlocale(LC_ALL,"");
	
	int vetor[10];
	int i,totalPar=0,totalImpar=0,somaPar=0,somaImpar=0;

	
	for(i=1;i<=10;i++){
	
		vetor[i]= rand() % 100+1;
		
		printf("Vetor[%d] = %d\n",i,vetor[i]);
		
		if(vetor[i]%2==0){
			
			somaPar+=vetor[i];
			
			totalPar++;
			
			
		}else{
			somaImpar+=vetor[i];
			
			totalImpar++;
		} 
	}
	printf("\n a contagem dos numeros pares é %d",totalPar);
	printf("\n a contagem dos numeros impares é %d",totalImpar);
	printf("\n__________________________________________");
	printf("\n a soma dos numeros pares é %d",somaPar);
	printf("\n a soma dos numeros impares é %d",somaImpar);
	printf("\n__________________________________________");
	printf("\n a media dos numeros pares é %d",somaPar/10);
	printf("\n a media dos numeros impares é %d",somaImpar/10);
}
