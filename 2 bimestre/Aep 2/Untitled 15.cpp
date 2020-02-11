#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	char word1[50],word2[50],word3[50],mword[50],mword2[50];
	int x=0,i=0,mwo=0;
	
	printf("Informe a primeira palavra: ");
	scanf("%s",&word1);
		i = strlen(word1);
		if (i>mwo){
			mwo=i;
			strcpy(mword,word1);
			strcpy(mword2,word1);
		}
		i=0;
	printf("Informe a segunda palavra: ");
	scanf("%s",&word2);
		i = strlen(word2);
		if (i>mwo){
			mwo=i;
			strcpy(mword,word2);
		}
		if (strcmp(word2,mword2)==1){
			strcpy(mword2,word2);
		}
		i=0;
	printf("Informe a terceira palavra: ");
	scanf("%s",&word3);
		i = strlen(word3);
		if (i>mwo){
			strcpy(mword,word3);
		}
			if (strcmp(word3,mword2)==1){
			strcpy(mword2,word3);
		}
		
	printf("Maior palavra de acordo com a quantidade de caracteres eh: %s \n",mword);
	printf("Maior palavra de acordo com a ordem alfabetica eh: %s \n",mword2);
	
	
system("pause");	
return 0;
}
