//3 - Crie uma fun��o que receba um valor em Fahrenheit e retorne em Celsius.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool calcularMedia(float n1,float n2){
	
	float media = (n1+n2)/2;
	return media>=1;
}

int main(int argc, char*argv[]){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d",calcularMedia(a,b));
}


