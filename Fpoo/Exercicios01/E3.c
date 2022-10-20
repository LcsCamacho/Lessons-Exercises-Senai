//3. Fa�a um Programa para uma loja de tintas. O programa dever� pedir o tamanho em metros
//quadrados da �rea a ser pintada. Considere que a cobertura da tinta � de 1 litro para cada 6 metros
//quadrados e que a tinta � vendida em latas de 18 litros, que custam R$ 80,00 ou em gal�es de 3,6 litros,
//que custam R$ 25,00.
//Informe ao usu�rio as quantidades de tinta a serem compradas e os respectivos pre�os
//em 2 situa��es:
//a. comprar apenas latas de 18 litros;
//b. comprar apenas gal�es de 3,6 litros;
#include  <locale.h>
#include  <stdio.h>

int main() {
  setlocale(LC_ALL,"");
  float  precoLata,precoGalao,tamPintado,litroNecessario = 1.0,i;
  int cont,opcao,opcao2;
//entrada
  printf("Digite a op�ao desejada \n");
  printf("0 - [Sair] ");
  printf("\n1 - [Comprar por Gal�es]");
  printf("\n2 - [Comprar por Latas]\n");
  scanf("%d",&opcao2);

  switch(opcao2){
    case 1 :{
      	do{
	        cont=0;
	        precoGalao=1.0;
	        printf("\nDigite o tamanho da area a ser pintada em M� ")scanf("%f",&tamPintado);
	        litroNecessario=tamPintado/6;
	        //processamento 
	        if(litroNecessario<=3.6){
	          	printf("\nSer� necess�rio apenas um galao de 3.6L e voc� gastar� apenas R$25,00");
	          	opcao=0;
	        }else if (3.6<litroNecessario){
	        	for(i=3.6;i<=litroNecessario+3.5;i=i+3.6){
		            cont = cont+1;
		            precoGalao=cont*25;
		            printf("contagem de litros:%.1fL\n",i);
	        	}
	        }
	        if(3.6<litroNecessario){
	        printf("\nLitro Necessario= %.1f\nA quantidade de gal�es %d\nO pre�o a ser gasto %.1f",litroNecessario,cont,precoGalao);
	        }
	        printf("\n_______________________");
	        printf("\n0 - [Sair] ");
	        printf("\n1 - [C�lculo por Gal�es]");
	        printf("\n2 - [C�lculo por Latas] \n");
	        scanf("%d",&opcao2);
	        if(opcao2==0){
	          printf("Tchau!!");
       		}
      	}while(opcao2==1);
    break;
    }

    case 2 :{
      	do{
	        cont=0;
	        precoLata=1.0;
	        printf("Digite o tamanho da area a ser pintada em M� ")scanf("%f",&tamPintado);
	        litroNecessario=tamPintado/6;
	        //processamento
	        if(18>=litroNecessario){
	       	 	printf("\nLitro necess�rio= %.1f\nA quantidade de gal�es 1\nIr� gastar apenas R$80,00\n_______________",litroNecessario);
	        	opcao2=0;
	        }else if(litroNecessario>18 && litroNecessario<=36){
	          	printf("\nLitro necess�rio= %.1f\nA quantidade de gal�es 2\nIr� gastar apenas R$160,00\n_______________",litroNecessario);
	            opcao2=0;
	        }else if(litroNecessario>36){
	          	for(i=18;i<=litroNecessario+17;i=i+18){
		            cont=cont+1;
		            precoLata=cont*80;
		            printf("Contagem:%.1f\n",i);
	          }
	        }
	        printf("\nLitroNecessario= %.1f.\nA quantidade de gal�es: %d.\nIr� gastar apenas %.1f\n______________",litroNecessario,cont,precoLata);
	        printf("\n0 - [Sair] ");
	        printf("\n1 - [C�lculo por Gal�es] ");
	        printf("\n2 - [C�lculo por Latas]\n ");
	        scanf("%d",&opcao2);
	        if(opcao2==0){
	          printf("Tchau!!");
	        }
      	}while(opcao2==2);
    break;
    }
    default :
      printf("Ok");
  }
}
  
  
