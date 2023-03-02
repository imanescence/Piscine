#include <stdio.h>

void	exo1(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int nbr;
	nbr = 12;
	exo1(&nbr);
	/*int	variable;
	variable = 1;
	nbr = &variable;*/
	printf("La valeur du pointeur est de : %i", nbr);
}
