/* - Calcule a média de 3 numeros e imprima 
Se menor que 4 nao passou
se for entre 4 e 6 quase
se maior que 6 passou*/

#include<locale.h>
#include<stdio.h>

int main(){
	//Váriaveis e confs
	setlocale(LC_ALL,"");
	int n1,n2,n3,qtdNotas;
	float media;
	//entrada
	printf("Digite a quantidade de notas a ser calculada na média : ");
	scanf("%d",&qtdNotas);
	printf("Digite sua nota 1 : ");
	scanf("%d",&n1);
	
	printf("Digite sua nota 2 : ");
	scanf("%d",&n2);
	
	printf("Digite sua nota 3 : ");
	scanf("%d",&n3);
	
	//processamento
	media = (n1+n2+n3)/3.0;
	if(media< 4){
		printf("Nao há aprovação, Nota:%.1f",media);

	} else if(4 <media<= 6){
		printf("Na trave, Nota:%.1f",media);
		
	}else if(11 >media> 6){
		printf("Passou, Nota:%.1f",media);
		
	}else{
		printf("ok");
		
	}
	return 0;
	//processamento e saida
}
