#include <locale.h>
#include <stdio.h>
int main(){
	setlocale(LC_ALL,"");
	int a,b,c;
	int i;
	char nome[10];	
	for(i=0;i<9;i++){
		printf("\ndigite o lado a: ");
		scanf("%d",&a);
		printf("digite o lado b: ");
		scanf("%d",&b);
		printf("digite o lado c: ");
		scanf("%d",&c);
		if(a==b && a==c)printf("Equilátero");	
		else if(a==b && a!=c || a!=b && a==c)printf("Isósceles");
		else if(a!=b && a!=c)printf("Escaleno");
	}
}
