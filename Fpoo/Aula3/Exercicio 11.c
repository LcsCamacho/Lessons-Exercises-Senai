//

#include <stdio.h>
#include <locale.h>
  
int main() {
	setlocale(LC_ALL,"");
	float preco,desconto;
	char nome[10];
	
	//Entrada
	printf("O que você esta vendendo? \n Calça \n Bermuda \n Camisa \n ");
		scanf("%s",&nome);
	printf("Digite o preco do produto : ");
		scanf("%f",&preco);
  		desconto = preco;
  	
	//Processamento e Saída
  	if(strcmp(nome,"Bermuda")==0 || strcmp(nome,"bermuda")==0){
      desconto = ((desconto / 100) * 10);
      preco = preco - desconto;
      printf("O desconto do produto é de: %.2f",desconto);
    
  } else if(strcmp(nome,"Camisa")==0 || strcmp(nome,"camisa")==0){
      desconto = ((desconto / 100) * 20);
      preco = preco - desconto;
      printf("O desconto do produto é de: = %.2f \n",desconto);
  } else if(strcmp(nome,"Calca")==0 || strcmp(nome,"calca")==0){
      desconto = ((desconto / 100) * 15);
      preco = preco - desconto;
      printf("O desconto do produto é de: = %.2f \n",desconto);
  } else{
    printf("ok \n");
  }
  //saida
	printf(" %s : %.2f",nome,preco);
    return 0;
}
  
