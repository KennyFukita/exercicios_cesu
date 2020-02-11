#include <stdio.h>
#include <stdlib.h>

int main (){
	char carc, nome[50];
	int x = 0, vendas = 0;
	float salfixo = 0, salfim = 0;
		
		printf("Informe o seu nome: ");
		do{
			carc = getchar();
			nome[x] = carc;
			x++;
		} while(carc != '\n');
		nome[x-1] = '\0';
		
		printf("Informe seu salario fixo(reais): ");
		scanf("%f", &salfixo);
		printf("Informe o total de vendas no mes: ");
		scanf("%d", &vendas);
		
			salfim = salfixo * 1.15;
		
		system ("cls");
		printf("|SEUS DADOS| \n");
		printf("Nome: %s \n",nome);
		printf("Salario fixo: %.2fR$ \n",salfixo);
		printf("Salario final: %.2fR$ \n",salfim);
		
	
system ("pause");	
return 0;	
}
