/* TODO (#1#): 8. O Sr. Manoel Joaquim possui uma grande 
               loja de artigos de R$ 1,99, com cerca de 10 
               operadores 
               de caixas. Para agilizar o cálculo de quanto 
               cada cliente deve pagar ele desenvolveu um 
               tabela que contém 
               o número de itens que o cliente comprou e ao 
               lado o valor da conta. Desta forma a atendente 
               do caixa 
               precisa apenas contar quantos itens o cliente 
               está levando e olhar na tabela de preços. Você 
               foi contratado 
               para desenvolver o programa que monta esta 
               tabela de preços, que conterá os preços de 1 
               até 50 produtos, 
               conforme o exemplo abaixo:
               Lojas Quase Dois - Tabela de preços
               1 - R$ 1.99
               2 - R$ 3.98
               …
               50 - R$ 99.50 */
               
#include <stdio.h>
#include<locale.h>
int main() {
	int cont=0;
	float i;
	setlocale(LC_ALL,"");
	for(i=1.99;i<=99.5;i=i+1.99){
	    cont=cont+1;
	    if(cont==10){
	        printf("_______\n ");
	    }else if(cont==20){
	        printf("_______\n ");
	    }else if(cont==30){
	        printf("_______\n ");
	    }else if(cont==40){
	        printf("_______\n ");
	    }
	      printf("%d - R$ %.2f\n ",cont,i);
	    }
    return 0;
}
  
