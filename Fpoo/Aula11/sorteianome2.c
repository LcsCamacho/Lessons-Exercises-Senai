/* TODO (#1#): Em alguns casos a rifa poderá ter mais de um 
               ganhador então crie uma função que receba 
               como parâmetro um vetor de 10 nomes e um 
               total de quantos deseja sortear, e mostre na 
               tela estes nomes sorteados. */
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
//funcao recebe nomes
void recebeLista(){
	for(i=0;i<10;i++){
		scanf("%s",&nomes[i]);	
	}
}
int main(){
	int qtdNomes;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	//chama a funcao que recebe nomes
	recebeLista();
	//recebe quantos nomes quer sortear
	printf("Quantos nomes quer sortear");
	scanf("%d",&qtdNomes);
	//chama a funcao
	for(j;j<qtdNomes;j++) {
		sorteianome();
	}
}
