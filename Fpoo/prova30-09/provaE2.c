#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	int idade;
	int i;
	char nome[10];
	for(i=0;i<7;i++){
		printf("digite seu nome: ");
		scanf("%s",&nome);
		printf("Digite sua idade: ");
		scanf("%d",&idade);
		if(idade<=12)printf("%s Criança\n",nome);	
		else if(idade>12 && idade < 17)printf("%s Jovem\n",nome);
		else if(idade>18 && idade < 30)printf("%s Adulto\n",nome);
		else if(idade>31 && idade < 65)printf("%s Meia idade\n",nome);
		else printf("%s Idoso\n",nome);		
	}
}
