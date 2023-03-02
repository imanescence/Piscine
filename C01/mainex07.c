#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int i;
	i = 0;
	int jsp = size;
	while (i != (jsp / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = tmp;
		i++;
		size--;
	}
}

int main()
{
	int n = 6;
	int tab [] 	= {1, 5, 9, 3, 8, 0};
	int i = 0;
	ft_rev_int_tab(tab, n);
	
	int p = 6;
	while(i < p)
	{
		printf("%d",tab[i]);
		i++;
	}

}
