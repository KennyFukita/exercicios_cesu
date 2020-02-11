#include <stdio.h>
#include <stdlib.h>

int main () {
	float raio = 0, h = 0, at = 0 ;
		printf ("Informe o valor do raio: ");
		scanf ("%f",&raio);
		printf ("Informe o valor da altura: ");
		scanf ("%f",&h);
			at = (2*3.1416*raio*h) + (3.1416*raio*raio);
		printf ("O valor da area do cilindro e: %.2fcm \n ",at);	
	system ("pause");
	return 0;
}
