#include <stdio.h>
#include <stdlib.h>

int main (){
	float km=0,milhas=0;
		do
		{
			printf("Informe sua velocidade(milhas): ");
			scanf("%f", &milhas);
			if (milhas < 0)
			printf ("Informe um valor positivo \n");
			printf ("\n");	
		} while (milhas < 0);	
		km = milhas * 1.60934;
		printf ("O valor em KM e: %.3f KM \n",km);	
		
	system ("pause");
	return 0;
}
