/* TODO (#1#):  fazer um programa que leia uma 
				string que represente um numero ex DEZ, NOVE, OITO e converta para o numero e
				 a quantidade de caracteres */
  	
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char str[10] ,i;
	int qtdCarac = 0;
	
    printf("Digite um numero por extenso de 0 a 10: ");
    scanf("%s", &str[0]);
    											//'\0' é null
	/* funçao strlen --->*/while(str[qtdCarac] != '\0')qtdCarac++;	
	
	printf("Quantidade caracteres:%d",qtdCarac);
	
	qtdCarac = 0;
	if(strncmp(str,"um",strlen(str))==0)printf("\nNumero:1");
	else if(strncmp(str,"dois",strlen(str))==0)printf("\nNumero:2");
	else if(strncmp(str,"tres",strlen(str))==0)printf("\nNumero:3");
	else if(strncmp(str,"quatro",strlen(str))==0)printf("\nNumero:4");
	else if(strncmp(str,"cinco",strlen(str))==0)printf("\nNumero:5");
	else if(strncmp(str,"seis",strlen(str))==0)printf("\nNumero:6");
	else if(strncmp(str,"sete",strlen(str))==0)printf("\nNumero:7");
	else if(strncmp(str,"oito",strlen(str))==0)printf("\nNumero:8");
	else if(strncmp(str,"nove",strlen(str))==0)printf("\nNumero:9");
	else if(strncmp(str,"dez",strlen(str))==0)printf("\nNumero:10");
	else("numero nao encontrado.");
}
