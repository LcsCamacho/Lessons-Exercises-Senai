//12 - Escreva um programa que leia 10 n�meros inteiros e exiba na tela ao final, o maior n�mero que foi
//digitado pelo usu�rio. 

#include <stdio.h>
int main() {
   int i,maior,armazena,menu;
   

  do{
  	//entrada
    for(i=0;i<=10;i++){
      printf("Digite um numero qualquer: ");
        scanf("%d",&armazena);
    //processamento
      if (maior<=armazena){
        maior = armazena;
      }33
    } 
    //saida
    printf("%d",maior);
    printf("\nDeseja continuar? [1 - sim]  [2 - nao]");
      scanf("%d",&menu);
  }while(menu==1);

    
}
  
