/* TODO (#1#): 7. Faça um programa que faça 5 perguntas 
               para uma pessoa sobre um crime. As 
               perguntas são:
               a. "Telefonou para a vítima?"
               b. "Esteve no local do crime?"
               c. "Mora perto da vítima?"
               d. "Devia para a vítima?"
               e. "Já trabalhou com a vítima?"
               O programa deve no final emitir uma 
               classificação sobre a participação da pessoa no 
               crime. Se a 
               pessoa responder positivamente a 2 questões 
               ela deve ser classificada como "Suspeita", entre 
               3 e 4 
               como "Cúmplice" e 5 como "Assassino". Caso 
               contrário, ele será classificado como 
               "Inocente". */



#include <stdio.h>
#include <locale.h>
#include <string.h>
int main() {
  setlocale(LC_ALL,"");
  int cont;
  char frase[2];
  char sim[]="sim";

  printf("Voce é suspeito, responda todas as perguntas: ");
  printf("_______________________________");
  
  printf("\nTelefonou para a vítima? ")scanf("\n%s",&frase);
  if(strcmp(frase,sim)==0)cont=cont+1;
  
  printf("\nEsteve no local do crime?")scanf("\n%s",&frase);
  if(strcmp(frase,sim)==0)cont=cont+1;
  
  printf("\nMora perto da vítima? ")scanf("\n%s",&frase);
  if(strcmp(frase,sim)==0)cont=cont+1;
  
  printf("\nDevia para a vítima?")scanf("\n%s",&frase);
  if(strcmp(frase,sim)==0)cont=cont+1;
  
  printf("\nJá trabalhou com a vítima?")scanf("\n%s",&frase);
  if(strcmp(frase,sim)==0)cont=cont+1;
  
  if(cont<2){
    printf("Você foi classificado como: Inocente");
  }else if(cont==2){
    printf("Você foi classificado como: Suspeito");
  }else if(cont<=4&&cont>2){
    printf("Você foi classificado como: Cumplice");
  }else
    printf("Você foi classificado como: Assasino");

}
  
