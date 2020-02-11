#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	char word1[20],word2[20];
	int x=0,i=0;
	
	printf("Informe uma palavra: ");
	scanf("%s",&word1);
		
	for (x=strlen(word1)-1; x>=0; x--){
		word2[i] = word1[x];
		i++;
	}
	
	word2[i] = '\0';
	
	if(strcmp(word2,word1)==0){
		printf("A palavra '%s' eh um palindromo \n",word1);
	}
	else{
		printf("A palavra '%s' nao eh um palindromo \n",word1);
	}
	
system("pause");
return 0;	
}
