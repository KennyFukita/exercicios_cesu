#include <stdio.h>
#include <stdlib.h>

int main (){
	float dist2 = 0, dist = 0, gaso = 0, gaso2 = 0, cm = 0;
		printf("Informe a distancia percorrida(KM): ");
		scanf("%f",&dist);
		printf("Informe o total gasto de gasolina(L): ");
		scanf("%f",&gaso);
			dist2 = dist/2;
			gaso2 = gaso/2;
			cm = (dist2/gaso2)*2;
			cm = cm * 0.82;
		printf ("O consumo médio foi de: %f \n",cm);
system ("pause");
return 0;	
}
