//(2) Desenvolva um programa que leia o nome de 5 times de futebol, o n�mero de vit�rias e o n�mero de empates de cada time. O programa dever� calcular e apresentar na tela, o nome dos times e o total de pontos de cada um e a ordem de classifica��o crescente. Lembrando que a vit�ria vale 3 pontos e o empate vale 1 ponto.
#include <stdio.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"");	
  char nome[5][10];
  int i,vit,emp,aux;
  int pontos[5];
  for(i=0;i<5;i++){
    printf("%d - Digite o nome do time, a quantidade de vit�rias e de empates:\n",i);
    scanf("%s",&nome[i]);
    scanf("%d",&vit);
    scanf("%d",&emp); 
    pontos[i]=(vit*3)+emp;
  }
  for(i=0;i<5;i++){
    if(pontos[i]>pontos[4-i]){
      aux=pontos[i];
      pontos[i]=pontos[4-i];
      pontos[4-i]=aux;
    }
  }
  
  
  for(i=0;i<5;i++){
    printf("o Time %s esta em %d� lugar com %d\n",nome[i],i+1,pontos[i]);
  }
}
  
