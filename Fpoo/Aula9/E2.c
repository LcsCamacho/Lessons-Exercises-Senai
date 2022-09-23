//2 - Crie uma função que receba um valor em Celsius e retorne em Fahrenheit.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


float paraF(float celsius){

	return celsius*9/5+32;
}

int main(){
	float c,celsius;
	scanf("%f",&c);
	
	printf("c = %.0f\nF = %.0f",c,paraF(c));
}



