/* TODO (#1#): Ana Maria organiza campeonatos de diversos 
               esportes, como futebol, basquete, entre 
               outros, crie uma função que receba 40 nomes 
               de times e quantos times cada grupo deve ter, 
               a função deve mostrar na tela os times 
               separados em grupos porém sorteados 
               aleatóriamente. */
               
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<string.h>
//variaveis
int num[40],qtdTimes,aux,igual;
int i,i2,j;
char nomesTimes[40][30];
//funcao recebe nomes
void listaTimes(){
	setlocale(LC_ALL,"");
	for(i=0;i<40;i++){
		scanf("%s",&nomesTimes[i]);
	}
}
void separaTimes(){
	setlocale(LC_ALL,"");
	//sorteia um numero aleatorio sem repetir
	srand(time(NULL));
	do{
		num[i]=rand () % 40;
		igual=0;	
		for(i2=0;i2<i;i2++)if(num[i2]=num[i])igual=1;
		if(igual==0)i++;
	}while(i<40);
	for(i=0;i<10;i++)printf("\nnum %d",num[i]);
	//recebe qtd de times em cada grupo
	printf("Quantos times cada grupo? --");
	scanf("%d",&qtdTimes);
	aux=qtdTimes;
	//printa os times
	printf("\n\n-----Grupo %d-----\n",j+1);
	j=1;
	for(i=0;i<40;i++) {
		printf("\n%dº -%s",i+1,nomesTimes[num[i]]);
		if (i == qtdTimes-1){
			printf("\n");
			if(i==39)break;
			printf("\n-----Grupo %d-----",j+1);
			qtdTimes+=aux;
			j++;
		}
	}
}
//funcao main
int main(){
	int qtdNomes;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	//chama a funcao que recebe nomes
	listaTimes();
	//chama a funcao
	separaTimes();
}
