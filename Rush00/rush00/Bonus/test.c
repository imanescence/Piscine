#include <unistd.h>

void	ft_putchar(char c);

int	error(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Width and Length must be strictly superior to '0'\n", 49);
		return (1);
	}
	return (0);
}
void	ft_is_edge(int size[7], char *letters[7])
{
	int	w;
	int	l;
	size[0] = w;
	size[1] = l;

	if (size[2] == size[0] || size[2] == 1 || size[3] == size[1] || size[3] == 1)
	{
		if (size[3] == size[1] && size[2] == size[0])
			ft_putchar(*(*letters));
		else if (size[3] == size[1] && size[2] == 1)
			ft_putchar(*(*letters + 1));
		else if (size[3] == 1 && size[2] == size[0])
			ft_putchar(*(*letters + 2));
		else if (size[3] == 1 && size[2] == 1)
			ft_putchar(*(*letters + 3));
		else if (size[3] == size[1] || size[3] == 1)
			ft_putchar(*(*letters + 4));
		else
			ft_putchar(*(*letters + 5));
	}
	else
		ft_putchar(' ');
}

int	rush0X(int x, int y, char *letters[7])
{
	int	size[7];

	size[2] = error(x, y);
	size[0] = x;
	size[1] = y;
	if (size[2] > 0)
		return (size[2]);
	while (y > 0)
	{
		x = size[0];
		while (x > 0)
		{
			size[2] = x;
			size[3] = y;
			ft_is_edge(size, letters);
			x--;
		}
		ft_putchar('\n');
		y--;
	}
	return (0);
}
