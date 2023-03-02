#include <stdio.h>

void	exo3(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;	
}
int main()
{	int a = 10;
	int b = 18;
	int *div = &a;
	int *mod = &b;
	exo3(a, b, div, mod);
	printf("La valeur du pointeur est de : %d", *div);
	printf("La valeur du pointeur est de : %d", *mod);
}
