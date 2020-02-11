#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

	char nome[25];
	char sexo;
	int idade=0;
	float salario=0;
	
		printf("Insira seu nome:");
		gets(nome);
		fflush(stdin);
		
		do{
		printf("Insira o sexo (M/F):");
		scanf("%c",&sexo);
		fflush(stdin);
		if (sexo!='M' && sexo!='F'){
			printf("ERRO, insira (M/F) \n");
		}
		
	    }
	    while(sexo!='M' && sexo!='F');
	
	
		printf("Insira seu salario:");
		scanf("%f",&salario);
		fflush(stdin);
		
		printf("Insira sua idade:");
		scanf("%d",&idade);
		fflush(stdin);
		
		if(sexo=='M' && idade<=30){
			salario=(salario*1.07);
		}
		
		if(sexo=='M' && idade>=50){
			salario=(salario*1.09);
		}
		
		if(sexo=='M' && idade>50){
			salario=(salario*1.115);
		}
		
		if(sexo=='F' && idade<=30){
			salario=(salario*1.075);
		}
		
		if(sexo=='F' && idade>=30){
			salario=(salario*1.116);
		}
		
		printf("------------------------------- \n");
		printf("%s \n",nome);
		printf("Salario reajustado:%.2f \n\n",salario);
	
	system("pause");
	return 0;
}
