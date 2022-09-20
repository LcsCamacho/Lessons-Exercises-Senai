/* TODO (#1#): 10. O Sr. Manoel Joaquim expandiu seus 
               neg�cios para al�m dos neg�cios de 1,99 e 
               agora possui uma 
               loja de conveni�ncias. Fa�a um programa que 
               implemente uma caixa registradora 
               rudimentar. O programa 
               dever� receber um n�mero desconhecido de 
               valores referentes aos pre�os das mercadorias. 
               Um valor zero 
               deve ser informado pelo operador para indicar 
               o final da compra. O programa deve ent�o 
               mostrar o total da 
               compra e perguntar o valor em dinheiro que o 
               cliente forneceu, para ent�o calcular e mostrar 
               o valor do 
               troco. Ap�s esta opera��o, o programa dever� 
               voltar ao ponto inicial, para registrar a pr�xima 
               compra. A 
               sa�da deve ser conforme o exemplo abaixo:
               Lojas Tabajara
               Produto 1: R$ 2.20
               Produto 2: R$ 5.80
               Produto 3: R$ 0
               Total: R$ 9.00
               Dinheiro: R$ 20.00
               Troco: R$ 11.00
               -------- AT� A PR�XIMA ------
               Lojas Tabajara
               Produto 1: R$ 2.20 */


#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	int i=0,menu;
	float soma,dinheiro,produto;

	do{
	
		printf("Digite o valor do produto, ou 0 para sair.\n");
		
		do{
		
			i++;
			
			printf("Produto %d: R$",i);scanf("%f",&produto);
			
			soma=produto+soma;
			
		}while(produto>=1);
			
		printf("\nTotal :R$%.1f",soma);
			
		printf("\nQual o valor recebido? R$");scanf("%f",&dinheiro);
			
		printf("\nDinheiro : R$%.1f",dinheiro);
			
		printf("\nTroco : R$%.1f",dinheiro-soma);
			
		printf("\n------ AT� A PROXIMA-------");
			
		printf("\nLojas Tabaraja");
		
		printf("\nDeseja Continuar? [0-sim] [1-nao]");scanf("%d",&menu);
		
		if(menu!=0)printf("Tchau!!");
		
	}while(menu==0);
}
  
