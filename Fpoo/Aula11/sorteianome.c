/* TODO (#1#): Ana Maria, precisa de dinheiro e decidiu fazer 
               uma rifa de sua bicicleta. Para ajudar Ana 
               maria crie uma função que receba como 
               parâmetro um vetor de 10 nomes e sorteie um 
               aleatóriamente. */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<string.h>
//variaveis
int num,i,j;
char nomes[10][10];


//funcao
void sorteianome (){
	//sorteia um numero
	num=rand () % 10;
	//printa um nome aleatorio baseado no numero que foi sorteado
	printf("\n%s",nomes[num]);

}
void recebeLista(){
	//recebe 10 nomes
	for(i=0;i<10;i++){
		scanf("%s",&nomes[i]);	
	}
}
int main(){
	srand(time(NULL));
	setlocale(LC_ALL,"");
	recebeLista();
	for(j=0;j<2;j++) {
		sorteianome();
	}

}
