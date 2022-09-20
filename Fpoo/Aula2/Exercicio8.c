#include <stdio.h>
#include <locale.h>
//Desenvolva um programa que leia o raio (cm) e a altura (cm) de um cilindro. 
//Calcule e mostre a área (cm2) e o volume (cm3) do cilindro.
int main(){
	//configuração para mostrar acentuação
	setlocale(LC_ALL,"");
	//variaveis
	float raio,altura,volumeTotal,areaTotal;
	const float pi = 3.14;
	//entrada
	printf("-----------------------------");
	printf("\n");
	printf("Desenvolva um programa que leia o raio (cm) e a altura (cm) de um cilindro");
	printf("\n");
	printf("-----------------------------");
	printf("\n");
	printf("Digite o raio: ");
		scanf("%f",&raio);
	printf("\n");
	printf("Digite a altura: ");
		scanf("%f", &altura);
	//processamento
	areaTotal = (2*pi*raio*altura) + 2*(pi*(raio*raio));
	volumeTotal = pi * (raio * raio)* altura;
	//saida
	printf("\n ---------------------------");
	printf("\n");
	printf("A area total é : %.2f em cm² \n",areaTotal);
	printf("O volume total é : %.2f em cm³",volumeTotal);

	return raio;		
}
