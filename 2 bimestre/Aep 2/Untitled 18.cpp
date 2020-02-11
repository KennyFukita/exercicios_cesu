#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 50

int main(){
	int x=0,i=0;
	char str[50];
	
	printf("Informe uma frase/palavra: ");
	fgets(str,tam,stdin);
	
	x=strlen(str);
	
	printf("Os 4 primeiros caracteres sao: \n");
	for (i=0;i<4;i++){
		printf("%c ",str[i]);
	}
	printf("\nOs 3 ultimos caracteres sao: \n");
	for (i=x-4;i<=x;i++){
		printf("%c ",str[i]);
	}
	printf("\n");	
system ("pause");	
return 0;	
}
