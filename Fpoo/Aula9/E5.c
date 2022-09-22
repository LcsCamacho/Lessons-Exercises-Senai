//5 - Crie uma função que compare se dois valores são iguais e retorne um booleano.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool igualCompare(float n1,float n2){
	
	return (n1==n2);
	
}

int main(int argc, char*argv[]){

	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d",igualCompare(a,b));
}


