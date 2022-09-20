
/* TODO (#1#): 9. O Sr. Manoel Joaquim acaba de adquirir 
               uma panificadora e pretende implantar a 
               metodologia da 
               tabelinha, que já é um sucesso na sua loja de 
               1,99. Você foi contratado para desenvolver o 
               programa que 
               monta a tabela de preços de pães, de 1 até 50 
               pães, a partir do preço do pão informado pelo 
               usuário, 
               conforme o exemplo abaixo:
               Preço do pão: R$ 0.18
               Panificadora Pão de Ontem - Tabela de preços
               1 - R$ 0.18
               2 - R$ 0.36
               ...
               50 - R$ 9.00 */

#include <stdio.h>
#include<locale.h>
int main() {
	int cont=0;
	float i,vPao;
	setlocale(LC_ALL,"");
	
	//entrada e processamento
    printf("Digite o valor do Pão: ")scanf("%f",&vPao);
    for(i=vPao;i<=vPao*50;i=i+vPao){
   		cont=cont+1;
	    if(cont==10){
	   	 	printf("_______\n");
	    }else if(cont==20){
	    	printf("_______\n");
	    }else if(cont==30){
	    	printf("_______\n");
	    }else if(cont==40){
	    	printf("_______\n");
	    }
	    //saida
	    printf("%d - R$ %.1f\n ",cont,i);
    }
    return 0;
}
  
