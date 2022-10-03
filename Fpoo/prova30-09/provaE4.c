#include <locale.h>
#include <stdio.h>
#include <string.h>
int main(){
	setlocale(LC_ALL,"");
	int qtdVotosTotal=0,maior=0;
	int i,j,aux,aux3;
	float porcentVotos[20];
	int qtdVotos[20];
	char nome[6][10],primeiro[10],aux2[10];
	for(i=0;i<6;i++){
		printf("\ndigite o nome do candidato: ");
		scanf("%s",&nome);
		printf("digite a quantidade de votos: ");
		scanf("%d",&qtdVotos[i]);
		qtdVotosTotal+=qtdVotos[i];
	}
	for(i=0;i<6;i++){
		porcentVotos[i]=(float)qtdVotos[i]/qtdVotosTotal*100;
		printf("\nporcentVotos %.2f",porcentVotos[i]);
	}
	printf("\n\nsoma %d",qtdVotosTotal);
	for(i=0;i<6;i++){
		for(j=i+1;j<6;j++){
		    if(qtdVotos[i]<qtdVotos[j]){

    			aux3=porcentVotos[i];
    			porcentVotos[i]=porcentVotos[j];
    			porcentVotos[j]=aux3;
    			
    			strcpy(aux2,nome[i]);
    			strcpy(nome[i],nome[j]);
    			strcpy(nome[j],aux2);
		    }
        }
	}
    for(i=0;i<6;i++){
        printf("\n\nporcentVotos%.2f\nqtdVotos %d\nnome %s",porcentVotos[i],qtdVotos[i],nome[i]);
    }
}
