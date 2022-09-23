//3 - Crie uma função que receba um valor em Fahrenheit e retorne em Celsius.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


float paraC(float f){

	return f/9*5-32;
}

int main(){
	float f;
	scanf("%f",&f);
	
	printf("f = %.0f\nc = %.0f",f,paraC(f));
}


