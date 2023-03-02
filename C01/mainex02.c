#include <stdio.h>

void	exo2(int *a, int *b)
{
	int	swap = *a;
	*a = *b;
	*b = swap;
}

int main()
{
	int a = 5;
	int b = 6;
	exo2(&a, &b);
	printf("La valeur du pointeur est de a : %d", a);
	printf("La valeur du pointeur est de b : %d", b);

}

