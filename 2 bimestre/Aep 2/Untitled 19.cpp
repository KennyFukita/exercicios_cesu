#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	char p1[50],p2[50],p3[50],pfull[150];
	
	printf("Informe a primeira palavra: ");
	gets(p1);
	printf("Informe a segunda palavra: ");
	gets(p2);
	printf("Informe a terceira palavra: ");
	gets(p3);
	
	strcpy(pfull,p1);
	strcat(pfull," ");
	strcat(pfull,p2);
	strcat(pfull," ");
	strcat(pfull,p3);
	
	printf("Palavra concatenada: %s\n",pfull);
	
system ("pause");	
return 0;	
}
