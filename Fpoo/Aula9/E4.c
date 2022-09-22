//4 - Crie uma função que receba dois valores e retorne o maior entre eles.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int a,b;
int returnMaior(int a,int b){
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)return a;
	else return b;
}

int main(int argc, char*argv[]){
	
	printf("%d",returnMaior(a,b));
}


