
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char nomes[10][15], aux[15];
	int qtde, i, i2;
	
	printf("Nº total de nomes: ");
		scanf("%d", &qtde);
		
	for(i=0; i<qtde; i++)
		scanf("%s", nomes[i]);
	
	for(i=0; i<qtde; i++) {
		for(i2=0; i2<qtde; i2++) {
			if(strcmp(nomes[i], nomes[i2]) < 0) {
			strcpy(aux, nomes[i]);
			strcpy(nomes[i], nomes[i2]);
			strcpy(nomes[i2], aux);
			}
		}
	}
	
	printf("-nomes ordenados-\n");
	for(i=0; i<qtde; i++)
		printf("%s\n", nomes[i]);
	
	return 0;
}
