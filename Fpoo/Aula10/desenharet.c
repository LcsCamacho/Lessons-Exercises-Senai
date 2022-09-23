#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void retangulo (int altura, int largura, char c){
	int i,j=0;
	//desenha linha
	for(i=0;i<altura;i++){
		printf("\n%c",c);
		//desenha coluna
		for(j=0;j<largura-1;j++){
			if(i>0 && i<altura-1 && j<largura-2){
				printf(" ");
			}else printf("%c",c);
		}
	}
}
int main(){
	int alt,larg;
	char c;
	printf("Digite a altura: ");
	scanf("%d",&alt);
	printf("Digite a largura: ");
	scanf("%d",&larg);
	printf("Digite o caracter: ");
	c =	getch();
	retangulo(alt,larg,c);
}
