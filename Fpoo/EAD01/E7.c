/* TODO (#1#): 7. Fa�a um programa que fa�a 5 perguntas 
               para uma pessoa sobre um crime. As 
               perguntas s�o:
               a. "Telefonou para a v�tima?"
               b. "Esteve no local do crime?"
               c. "Mora perto da v�tima?"
               d. "Devia para a v�tima?"
               e. "J� trabalhou com a v�tima?"
               O programa deve no final emitir uma 
               classifica��o sobre a participa��o da pessoa no 
               crime. Se a 
               pessoa responder positivamente a 2 quest�es 
               ela deve ser classificada como "Suspeita", entre 
               3 e 4 
               como "C�mplice" e 5 como "Assassino". Caso 
               contr�rio, ele ser� classificado como 
               "Inocente". */



#include <stdio.h>
#include <locale.h>
#include <string.h>
int main() {
  setlocale(LC_ALL,"");
  int cont;
  char frase[2];
  char sim[]="sim";

  printf("Voce � suspeito, responda todas as perguntas: ");
  printf("_______________________________");
  
  printf("\nTelefonou para a v�tima? ")scanf("\n%s",&frase);
  if(strcmp(frase,sim)==0)cont=cont+1;
  
  printf("\nEsteve no local do crime?")scanf("\n%s",&frase);
  if(strcmp(frase,sim)==0)cont=cont+1;
  
  printf("\nMora perto da v�tima? ")scanf("\n%s",&frase);
  if(strcmp(frase,sim)==0)cont=cont+1;
  
  printf("\nDevia para a v�tima?")scanf("\n%s",&frase);
  if(strcmp(frase,sim)==0)cont=cont+1;
  
  printf("\nJ� trabalhou com a v�tima?")scanf("\n%s",&frase);
  if(strcmp(frase,sim)==0)cont=cont+1;
  
  if(cont<2){
    printf("Voc� foi classificado como: Inocente");
  }else if(cont==2){
    printf("Voc� foi classificado como: Suspeito");
  }else if(cont<=4&&cont>2){
    printf("Voc� foi classificado como: Cumplice");
  }else
    printf("Voc� foi classificado como: Assasino");

}
  
