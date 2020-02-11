#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, x;
  int div = 0;

  do {;
    printf("Digite um valor: ");
    scanf("%d", &x);
  } while (x <= 0);

  for (i = 1; i <= x; i = i + 1) {
    if (x % i == 0) {
     div = div + 1;
    }
  }

  if (div == 2)
    printf("O valor %d e primo \n", x);
  else
    printf("O valor %d nao e primo \n", x);
  system ("pause");
  return 0;
}
