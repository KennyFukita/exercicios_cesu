#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	char word[30];
	int x=0,tam=0;
	
	printf("Informe uma palavra: ");
	scanf("%s",&word);
		tam=strlen(word);
	
	printf("|Caracteres de acordo com a tabela ASCII| \n");
	for(x=0;x<=tam-1;x++){
		printf("]-> %c >>> %d \n",word[x],word[x]);
	}	
	
system ("pause");	
return 0;	
}
