#include <stdio.h>
#include <stdlib.h>

int main (){
	float dol=0, x=0, cotdol=0;
	
	printf("Informe o valor do produto: ");
	scanf("%f",&dol);
	printf("Informe a cotaçao do dolar: ");
	scanf("%f",&cotdol);
		x = (dol*cotdol) + 1.438;
	printf("Valor cobrado: %.2f reais\n",x);	
	
system("pause");
return 0;	
}
