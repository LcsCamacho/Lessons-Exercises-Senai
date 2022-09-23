#include<stdio.h>
#include<stdlib.h>

void fatorial(int num){
	int i;
	for(i=num-1;i>0;i--){
		num=num*i;	
	}
	printf("Fatorial:%d",num);
}
int main(){
	int num;
	scanf("%d",&num);
	fatorial(num);
}
