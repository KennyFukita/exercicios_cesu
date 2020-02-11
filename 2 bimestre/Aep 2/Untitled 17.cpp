#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	char word[20];
	int x=0, i=0;
	
	printf("Informe uma palavra: ");
	scanf("%s",&word);
	
	for(x=0;x<=strlen(word);x++){
		if(word[x] == 'a' || word[x] == 'e' || word[x] == 'i' || word[x] == 'o' || word[x] == 'u' || word[x] == 'o' || word[x] == 'A' || word[x] == 'E' || word[x] == 'I' || word[x] == 'O' || word[x] == 'U' ){
			i++;
		}
	}
	if(i==1){
		printf("A palavra %s possui %d vogal",word,i);
	}
	else{
	 	printf("A palavra %s possui %d vogais",word,i);
	}
}
