//-11 Escreva um programa que exiba na tela a tabuada de um número que deverá ser informado pelo
//usuário. 

#include <stdio.h>
int main() {
  int i,tab,menu;
  

  do{
  	//entrada
    printf("Digite o valor da tabuada desejada: ");
      scanf("%d",&tab);

    //processamento e saida
    for(i=1;i<=10;i++){
      printf("\n %d x ",tab);
      printf("%d  = %d",i,i*tab);

    }  
    printf("\n Digite 1 para continuar ou 2 para sair :");
      scanf("%d",&menu);
      system("cls");
  }while(menu==1);
}
  
