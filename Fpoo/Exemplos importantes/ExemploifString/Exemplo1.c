#include <locale.h>
#include <stdio.h>

int main(){
	//Vari�veis e Configura��es
	setlocale(LC_ALL,"");
	int cor;
	//Entradas
	printf("--------------------------------\n");
	printf("Digite a cor do sem�foro:\n [1-Verde]\n [2-Amarelo]\n [3-Vermelho]\n ");	
	scanf("%d",&cor);	
	//Processamento
	if (cor == 1){
		printf("Pode ir");
		
	}else if (cor == 2){
		printf("--------------------------------\n");	
		printf("!!!!!!!!!!!!!!Cuidado!!!!!!!!!!!!!!!!!");
		
	}else if(cor == 3){	
		printf("--------------------------------\n");
		printf("PARE ! STOP ! ");	
	}else {	
		printf("--------------------------------\n");	
		printf("Escolha uma cor v�lida");
	}	
	//Sa�das
}
