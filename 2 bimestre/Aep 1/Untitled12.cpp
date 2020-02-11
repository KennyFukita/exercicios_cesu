#include <stdio.h>
#include <stdlib.h>

int main () {
	int x = 2;
	
	for (x = 2; x <= 14 ; x = x + 1)
	{ 
		if (x % 2 == 0) {
			printf ("%d\n",x);
		}
   }
	system("pause");
	return 0;
}
