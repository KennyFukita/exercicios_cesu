#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char word[50];
	int x=0,tam=0;
	
	printf("Informe uma palavra/frase: ");
	gets(word);
	tam = strlen(word);
	
	printf("Palavra/frase ao contrario: ");
	for(x=tam-1;x>=0;x--){
		printf("%c",word[x]);
	}
	printf("\n");
	
system ("pause");	
return 0;	
}
