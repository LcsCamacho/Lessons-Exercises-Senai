/* TODO (#1#): 1 - Crie dois vetores num�ricos de dimens�o 5 
               com valores informados pelo usu�rio.
               Apresente a soma do primeiro vetor com o 
               inverso do segundo. */
#include <stdio.h>
#include<locale.h>
int main(){
	int vetor1[5],vetor2[5];
	setlocale(LC_ALL,"");
	int i,x,y,soma;
	
	for(i=0;i<5;i++){
		printf("La�o %d",i+1);
	    printf("\nVETOR[1]-digite um valor ");scanf("%d",&vetor1[i]);
		printf("\nVETOR[2]-digite um valor ");scanf("%d",&vetor2[i]);
		printf("___________________________________________________\n");
	}
	int	j=4;
	for(i=0;i<5;i++){
		soma=vetor1[i]+vetor2[j];
		printf("\n A soma do %d com o %d, � %d",vetor1[i],vetor2[j],soma);
		j--;
	}


}
  
