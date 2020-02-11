#include <stdio.h>
#include <stdlib.h>

int main (){
	int v1=1, v2=1, cont=0, cont2=0, mult=0;
	
	for(cont2 = 1; cont2 < 10; cont2++){
	
		printf("|TABUADA DO %d| \n",v2);	
		
			for(cont = 1; cont <= 10; cont++){
			mult = v1*v2;
			printf ("-> %d x %d = %d \n",v2,v1,mult);
			mult = 0;
			v1++;
			}
			
			printf ("\n");
			cont = 1;
			v2++;
			v1 = 1;
	}
	
system ("pause");
return 0;
}
