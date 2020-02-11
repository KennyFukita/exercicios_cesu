#include <stdio.h>
#include <stdlib.h>

int main (){
	float fin = 0, x = 0, arba = 0;
		printf("Informe o peso do boi(arroba): ");
		scanf("%f", &arba);
			arba = arba * 15;
			x = arba * 0.22;
			fin = arba - x ; 
		printf ("Peso final: %.2f KG \n ",fin);	
	system ("pause");
	return 0;
}
